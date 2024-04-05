#include "minimum_sum_of_mountain_triplets_i.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(minimum_sum_of_mountain_triplets_i, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.minimumSum(*(new vector<int>{8, 6, 1, 5, 3})), 9);
  EXPECT_EQ(s.minimumSum(*(new vector<int>{5, 4, 8, 7, 10, 2})), 13);
  EXPECT_EQ(s.minimumSum(*(new vector<int>{6, 5, 4, 3, 4, 5})), -1);
}