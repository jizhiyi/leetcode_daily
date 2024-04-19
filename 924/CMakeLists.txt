enable_testing()

add_executable(
    924_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    924_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(924_test)
