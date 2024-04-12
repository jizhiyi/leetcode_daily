#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2923, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.findChampion(*(new vector<vector<int>>{{0, 1}, {0, 0}})), 0);
  EXPECT_EQ(s.findChampion(
                *(new vector<vector<int>>{{0, 0, 1}, {1, 0, 1}, {0, 0, 0}})),
            1);
}
