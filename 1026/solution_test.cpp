#include "solution.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(test_1026, BasicAssertions) {
  Solution s;
  TreeNode *root = new TreeNode(8);
  root->left = new TreeNode(3);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(6);
  root->left->right->left = new TreeNode(4);
  root->left->right->right = new TreeNode(7);
  root->right = new TreeNode(10);
  root->right->right = new TreeNode(14);
  root->right->right->left = new TreeNode(13);
  EXPECT_EQ(s.maxAncestorDiff(root), 7);
}
