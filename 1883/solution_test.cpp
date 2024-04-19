#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_1883, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.minSkips(*(new vector<int>{1, 3, 2}), 4, 2), 1);
  EXPECT_EQ(s.minSkips(*(new vector<int>{7, 3, 5, 5}), 2, 10), 2);
  EXPECT_EQ(s.minSkips(*(new vector<int>{7, 3, 5, 5}), 1, 10), -1);
}
