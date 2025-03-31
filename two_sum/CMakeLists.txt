file(GLOB SOURCES "*.cpp" "*.h")

add_executable(two_sum ${SOURCES})

target_link_libraries(two_sum PRIVATE GTest::gtest GTest::gtest_main)

#add_test(NAME all_tests COMMAND two_sum)