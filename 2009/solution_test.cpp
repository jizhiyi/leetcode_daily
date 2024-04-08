#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2009, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.minOperations(*(new vector<int>{4, 2, 5, 3})), 0);
  EXPECT_EQ(s.minOperations(*(new vector<int>{1, 2, 3, 5, 6})), 1);
  EXPECT_EQ(s.minOperations(*(new vector<int>{1, 10, 100, 1000})), 3);
}
