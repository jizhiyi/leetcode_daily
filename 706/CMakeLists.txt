enable_testing()

add_executable(
    706_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    706_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(706_test)
