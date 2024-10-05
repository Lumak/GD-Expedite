#include <windows.h>
#include <string>
#include <sstream>
#include <debugapi.h>

#include "Logger.h"


static unsigned sLevel = 0;

void Logger::SetLogLevel(unsigned level)
{
    sLevel = level;
}

void Logger::LevelLog(unsigned level, const char *format, ...)
{
    char buf[2048];

    if (level & sLevel)
    {
        va_list args;
        va_start(args, format);
        vsprintf_s(buf, format, args);
        va_end(args);

        OutputDebugString(buf);
    }
}

void Logger::Logf(const char *format, ...)
{
    char buf[1024];

    va_list args;
    va_start(args, format);
    vsprintf_s(buf, format, args);
    va_end(args);

    OutputDebugString(buf);
}

