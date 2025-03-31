file(GLOB SOURCES "*.cpp" "*.h")

add_executable(merge_two_sorted_lists ${SOURCES})

target_link_libraries(merge_two_sorted_lists PRIVATE GTest::gtest GTest::gtest_main)
