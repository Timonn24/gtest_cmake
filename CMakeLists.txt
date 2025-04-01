cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 20)

project(algo_challenge)

find_package(GTest CONFIG REQUIRED)

enable_testing()

add_subdirectory(two_sum)
add_subdirectory(merge_two_sorted_lists)