#include "all_possible_full_binary_trees.hpp"
#include "gtest/gtest.h"
#include <gtest/gtest.h>
#include <queue>

using std::queue;

bool checkRes(int n, vector<TreeNode *> res) {
  static const int resCount[] = {0,  1, 0,   1, 0,   2, 0,    5, 0,    14, 0,
                                 42, 0, 132, 0, 429, 0, 1430, 0, 4862, 0};
  if (resCount[n] != res.size()) {
    GTEST_LOG_(INFO) << resCount[n] << " " << res.size();
    return false;
  }
  for (auto root : res) {
    queue<TreeNode *> que;
    que.push(root);
    int nodeNum = 0;
    while (!que.empty()) {
      TreeNode *&node = que.front();
      que.pop();
      nodeNum++;
      if (node->left == nullptr && node->right == nullptr) {
        continue;
      } else if (node->left != nullptr && node->right != nullptr) {
        que.push(node->left);
        que.push(node->right);
        continue;
      }
      GTEST_LOG_(INFO) << "nullptr";
      return false;
    }
    if (n != nodeNum) {
      GTEST_LOG_(INFO) << n << " " << nodeNum;
      return false;
    }
  }
  return true;
}

// Demonstrate some basic assertions.
TEST(all_possible_full_binary_trees, BasicAssertions) {
  vector<int> inputs = {7, 3};
  Solution s;
  for (auto input : inputs) {
    EXPECT_EQ(checkRes(input, s.allPossibleFBT(input)), true);
  }
}
