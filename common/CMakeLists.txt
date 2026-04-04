file(GLOB LIB_SOURCES "*.cpp" "*.h")

add_library(common STATIC ${LIB_SOURCES})

target_include_directories(common INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})