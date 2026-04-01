file(GLOB SOURCES "*.cpp" "*.h")

#include(googletest)

add_executable(two_sum_test ${SOURCES})

target_link_libraries(two_sum_test 
    PRIVATE 
    gtest 
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(two_sum_test)