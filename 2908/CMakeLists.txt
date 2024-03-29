enable_testing()

add_executable(
    minimum_sum_of_mountain_triplets_i_test
    minimum_sum_of_mountain_triplets_i_test.cpp
    minimum_sum_of_mountain_triplets_i.hpp
)
target_link_libraries(
    minimum_sum_of_mountain_triplets_i_test
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(minimum_sum_of_mountain_triplets_i_test)