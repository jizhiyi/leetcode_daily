enable_testing()

add_executable(
    1883_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    1883_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(1883_test)
