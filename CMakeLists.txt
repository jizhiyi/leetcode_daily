cmake_minimum_required(VERSION 3.11)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(331)
add_subdirectory(705)
add_subdirectory(706)
add_subdirectory(894)
add_subdirectory(924)
add_subdirectory(928)
add_subdirectory(1026)
add_subdirectory(1483)
add_subdirectory(1600)
add_subdirectory(1702)
add_subdirectory(1766)
add_subdirectory(1883)
add_subdirectory(1997)
add_subdirectory(2007)
add_subdirectory(2009)
add_subdirectory(2192)
add_subdirectory(2529)
add_subdirectory(2580)
add_subdirectory(2810)
add_subdirectory(2908)
add_subdirectory(2923)
add_subdirectory(2924)
add_subdirectory(2952)