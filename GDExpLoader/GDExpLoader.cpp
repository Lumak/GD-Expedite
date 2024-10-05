#include <windows.h>
#include <stdio.h>
#include "options.h"
#include "proc.h"

//=============================================================================
//=============================================================================
#define GRIMDAWN L"Grim Dawn.exe"
#define GDEXPDLL L"GDExp.dll"
#define	SETUP_EXPORT_FNNAME "GLSetOption"

#define MAJVERSION  1
#define MINVERSION  2
#define MAJPATCH    1

BOOL is64BitProcess = FALSE;
std::wstring expdllName = GDEXPDLL;

//=============================================================================
//=============================================================================
void PopMessage(bool isError, const char *msg)
{
	if (isError)
	{
		MessageBoxA(NULL, msg, "Error", MB_OK | MB_ICONERROR);
	}
	else
	{
		MessageBoxA(NULL, msg, "Success", MB_OK | MB_ICONINFORMATION);
	}
}

BOOL FileExists(LPCSTR szPath)
{
	DWORD dwAttrib = GetFileAttributes(szPath);
	return (dwAttrib != INVALID_FILE_ATTRIBUTES && !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}

//=============================================================================
//=============================================================================
bool LoadDll(DWORD dwProcessId)
{
	bool found = false;
	bool dllLoaded = false;

	if (dwProcessId != 0)
	{
		HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);

		if (hProcess)
		{
			//no reload
			if (GetBaseModuleHandle(dwProcessId, expdllName.c_str()))
			{
				printf("GDExp already loaded\n");

				return true;
			}

			const int maxPathLen = 512;
			char path[maxPathLen];

			GetCurrentDirectory(maxPathLen, path);

			const std::string strExpDll(expdllName.begin(), expdllName.end());
			std::string dllPath = std::string(path) + "\\" + strExpDll;

			LPCSTR DllPath = dllPath.c_str();
			printf("loading %s\n", DllPath);

			//check dll
			if (!FileExists(DllPath))
			{
				PopMessage(true, "GDExp dll missing.");
				return 0;
			}

			LPVOID pDllPath = VirtualAllocEx(hProcess, NULL, strlen(DllPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

			if (pDllPath != NULL)
			{
				BOOL success = WriteProcessMemory(hProcess, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);
				while (!success)
				{
					Sleep(100);
					success = WriteProcessMemory(hProcess, pDllPath, (LPVOID)DllPath, strlen(DllPath) + 1, 0);
				}

				HMODULE hKern32 = GetModuleHandleA("Kernel32.dll");

				if (hKern32 != NULL && hKern32 != INVALID_HANDLE_VALUE)
				{
					LPTHREAD_START_ROUTINE pthread = (LPTHREAD_START_ROUTINE)GetProcAddress(hKern32, "LoadLibraryA");
					HANDLE hLoadThread = CreateRemoteThread(hProcess, 0, 0, pthread, pDllPath, 0, 0);

					if (hLoadThread)
					{
						// wait for the execution to finish
						WaitForSingleObject(hLoadThread, INFINITE);

						// close LoadLibrary thread (dll is already loaded into host process)
						CloseHandle(hLoadThread);

						//verify dll is loaded
						Sleep(2);

						if (GetBaseModuleHandle(dwProcessId, expdllName.c_str()))
						{
							printf("dll loaded\n");
							dllLoaded = true;
						}
						else
						{
							printf("failed to load dll\n");
						}
					}
					else
					{
						PopMessage(true, "Remote thread failed.");
					}
				}
				else
				{
					PopMessage(true, "Failed to load Kernel32.dll.");
				}

				VirtualFreeEx(hProcess, pDllPath, strlen(DllPath) + 1, MEM_RELEASE);
			}
			else
			{
				PopMessage(true, "Failed to inject dll.");
			}
			CloseHandle(hProcess);
		}
		else
		{
			PopMessage(true, "OpenProcess failed.");
		}
	}
	else
	{
		PopMessage(true, "Failed to find \"Grim Dawn.exe\" process.");
	}

	return dllLoaded;
}

int CallRemoteExportFn(DWORD dwProcessId, uintptr_t remoteProcAddr, BOOL is64BitProcess, int optType, int optValue)
{
	HANDLE hProc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, dwProcessId);

	if (hProc)
	{
		if (remoteProcAddr == NULL)
		{
			CloseHandle(hProc);
			printf("Dll export function %s not found\n", SETUP_EXPORT_FNNAME);
			return 1;
		}

		// set vars
		int val[2];
		val[0] = optType;
		val[1] = optValue;

		LPVOID pArg = VirtualAllocEx(hProc, 0, sizeof(val), MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);

		if (pArg != NULL)
		{
			BOOL success = WriteProcessMemory(hProc, pArg, (LPVOID)&val, sizeof(val), 0);
			while (!success)
			{
				Sleep(100);
				success = WriteProcessMemory(hProc, pArg, (LPVOID)&val, sizeof(val), 0);
			}

			LPTHREAD_START_ROUTINE pthread = (LPTHREAD_START_ROUTINE)remoteProcAddr;
			HANDLE hLoadThread = CreateRemoteThread(hProc, 0, 0, pthread, pArg, 0, 0);
			if (hLoadThread)
			{
				// wait for the execution to finish
				WaitForSingleObject(hLoadThread, INFINITE);

				// close thread (function execution has completed)
				CloseHandle(hLoadThread);
			}
		}
		CloseHandle(hProc);
	}

	return 0;
}

//=============================================================================
//=============================================================================
int main(int argc, char *argv[])
{
	DWORD dwProcessId = 0;
	bool hideConsole = false;

    printf("GD expedite v%d.%d.%d, (c) 2024\n", MAJVERSION, MINVERSION, MAJPATCH);

	//init and get options
    Options options;
    options.GetOptions(argc, argv);

	//load dll and send options
	dwProcessId = GetProcId(GRIMDAWN);

    if (dwProcessId == 0)
    {
        printf("GD not found\n");
        return 1;
    }

	//check if the path includes "x64"
	if (ModulePathContainsPattern(dwProcessId, L"Game.dll", L"x64"))
	{
		is64BitProcess = TRUE;
		printf("GD running 64-bit process\n");
	}
	else
	{
		printf("GD running 32-bit process\n");
	}

#ifdef X64
	if (!is64BitProcess)
	{
		printf("64-bit loader cannot load if GD is running on 32-bit\n");
		return 1;
	}
#else
	if (is64BitProcess)
	{
		printf("32-bit loader cannot load if GD is running on 64-bit\n");
		return 1;
	}
#endif

	if (dwProcessId != 0 && LoadDll(dwProcessId))
	{
		std::string exportedFnName = SETUP_EXPORT_FNNAME;
		uintptr_t remoteProcAddr = GetProcAddressRemote(dwProcessId, is64BitProcess, expdllName.c_str(), exportedFnName);

		if (options.expMultiplier != TYPE_DEFAULT_VALUE)
		{
			printf("char exp multiplier=%d\n", options.expMultiplier);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_CHAR_MX, options.expMultiplier);
		}
		if (options.factionFriendMultiplier != TYPE_DEFAULT_VALUE)
		{
			printf("faction friend rep multiplier=%d\n", options.factionFriendMultiplier);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_FRIENDFACTION_MX, options.factionFriendMultiplier);
		}
		if (options.factionEnemyMultiplier != TYPE_DEFAULT_VALUE)
		{
			printf("faction enemy rep multiplier=%d\n", options.factionEnemyMultiplier);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_ENEMYFACTION_MX, options.factionEnemyMultiplier);
		}
		if (options.oneDropDupe != TYPE_DEFAULT_VALUE)
		{
			printf("one item drop dupe option=%d\n", options.oneDropDupe);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_ONEDROP_DUPE, options.oneDropDupe);
		}
		if (options.prefixChange != TYPE_DEFAULT_VALUE)
		{
			printf("prefix change option=%d\n", options.prefixChange);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_PREFIX_CHANGE, options.prefixChange);
		}
		if (options.suffixChange != TYPE_DEFAULT_VALUE)
		{
			printf("suffix change option=%d\n", options.suffixChange);
			CallRemoteExportFn(dwProcessId, remoteProcAddr, is64BitProcess, TYPE_SUFFIX_CHANGE, options.suffixChange);
		}
	}

	return 0;
}

