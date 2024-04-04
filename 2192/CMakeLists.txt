enable_testing()

add_executable(
    2192_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    2192_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(2192_test)
