enable_testing()

add_executable(
    2923_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    2923_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(2923_test)
