#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_1483, BasicAssertions) {
  auto tree = new TreeAncestor(7, *(new vector<int>{-1, 0, 0, 1, 1, 2, 2}));
  EXPECT_EQ(tree->getKthAncestor(3, 1), 1);
  EXPECT_EQ(tree->getKthAncestor(5, 2), 0);
  EXPECT_EQ(tree->getKthAncestor(6, 3), -1);
}
