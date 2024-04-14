enable_testing()

add_executable(
    705_test
    solution_test.cpp
    solution.hpp
)

target_link_libraries(
    705_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(705_test)
