file(GLOB SOURCES "*.cpp" "*.h")

add_executable(merge_two_sorted_lists_test ${SOURCES})

target_link_libraries(
    merge_two_sorted_lists_test 
        PRIVATE 
        gtest 
        gtest_main
        common
)

include(GoogleTest)
gtest_discover_tests(merge_two_sorted_lists_test)
