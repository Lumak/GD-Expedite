include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../common)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../item)

file (GLOB SRC_FILES *.cpp *.h )
source_group ("src" FILES ${SRC_FILES} )
file (GLOB COMMON_FILES ../common/*.cpp ../common/*.h )
source_group ("common" FILES ${COMMON_FILES} )

add_executable(GDExpLoader ${SRC_FILES} ${COMMON_FILES})

set_target_properties(GDExpLoader PROPERTIES OUTPUT_NAME "GDExpLoader")
set (CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -D_RELEASE")
