#include "count-ways-to-group-overlapping-ranges.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(count_ways_to_group_overlapping_ranges_test, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.countWays(*(new vector<vector<int>>{{6, 10}, {5, 15}})), 2);
  EXPECT_EQ(
      s.countWays(*(new vector<vector<int>>{{1, 3}, {10, 20}, {2, 5}, {4, 8}})),
      4);
}