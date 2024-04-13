#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2924, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.findChampion(3, *(new vector<vector<int>>{{0, 1}, {1, 2}})), 0);
  EXPECT_EQ(
      s.findChampion(3, *(new vector<vector<int>>{{0, 2}, {1, 3}, {1, 2}})),
      -1);
}
