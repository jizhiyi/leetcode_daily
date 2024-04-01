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
add_subdirectory(1997)
add_subdirectory(2580)
add_subdirectory(2810)
add_subdirectory(2908)
add_subdirectory(2952)