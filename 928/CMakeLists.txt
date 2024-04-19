enable_testing()

add_executable(
    928_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    928_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(928_test)
