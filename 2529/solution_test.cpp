#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2529, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.maximumCount(*(new vector<int>{-2, -1, -1, 1, 2, 3})), 3);
  EXPECT_EQ(s.maximumCount(*(new vector<int>{-3, -2, -1, 0, 0, 1, 2})), 3);
  EXPECT_EQ(s.maximumCount(*(new vector<int>{5, 20, 66, 1314})), 4);
}
