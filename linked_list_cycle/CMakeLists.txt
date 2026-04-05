file(GLOB SOURCES "*.cpp" "*.h")

add_executable(linked_list_cycle_test ${SOURCES})

target_link_libraries(
    linked_list_cycle_test 
        PRIVATE 
        gtest 
        gtest_main
        common
)

include(GoogleTest)
gtest_discover_tests(linked_list_cycle_test)