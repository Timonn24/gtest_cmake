file(GLOB SOURCES "*.cpp" "*.h")

add_executable(best_time_to_buy_and_sell_stocks ${SOURCES})

target_link_libraries(
    best_time_to_buy_and_sell_stocks 
    PRIVATE 
    gtest 
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(best_time_to_buy_and_sell_stocks)
