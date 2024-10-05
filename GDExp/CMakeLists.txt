
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Detours/include)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../item)

include_directories($ENV{WindowsSDK_IncludePath})
include_directories($ENV{DXSDK_DIR}/include)

if(DEFINE_X64)
  link_directories("$ENV{DXSDK_DIR}/lib/x64")
  link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Detours/lib.X64)
else()
  link_directories("$ENV{DXSDK_DIR}/lib/x86")
  link_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Detours/lib.X86)
endif()

### grab files
file (GLOB SRC_FILES *.cpp *.h )
source_group ("src" FILES ${SRC_FILES} )
file (GLOB COMMON_FILES ../common/*.cpp ../common/*.h )
source_group ("common" FILES ${COMMON_FILES} )
file (GLOB ITEM_FILES ../item/*.cpp ../item/*.h ../item/*.inl)
source_group ("item" FILES ${ITEM_FILES} )

add_library(${CMAKE_PROJECT_NAME} SHARED ${SRC_FILES} ${COMMON_FILES} ${ITEM_FILES} )
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES OUTPUT_NAME "GDExp")

set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D_RELEASE")
set_target_properties(${CMAKE_PROJECT_NAME} PROPERTIES LINK_FLAGS "/ignore:4099")
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/GDExpLoader)

target_link_libraries(${CMAKE_PROJECT_NAME} detours.lib winmm.lib d3dx9d.lib)

