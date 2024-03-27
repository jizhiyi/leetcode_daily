enable_testing()

add_executable(
    count-ways-to-group-overlapping-ranges_test
    count-ways-to-group-overlapping-ranges_test.cpp
    count-ways-to-group-overlapping-ranges.hpp
)
target_link_libraries(
    count-ways-to-group-overlapping-ranges_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(count-ways-to-group-overlapping-ranges_test)