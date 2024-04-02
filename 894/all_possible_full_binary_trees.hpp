#include <vector>

using std::vector;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  vector<TreeNode *> allPossibleFBT(int n) {
    if (n % 2 == 0) {
      return vector<TreeNode *>();
    }
    if (n == 1) {
      return {new TreeNode(0)};
    }
    vector<TreeNode *> res;
    for (int i = 1; i < n; i += 2) {
      auto leftRes = allPossibleFBT(i);
      auto rightRes = allPossibleFBT(n - i - 1);
      for (auto left : leftRes) {
        for (auto right : rightRes) {
          TreeNode *root = new TreeNode(0, left, right);
          res.push_back(root);
        }
      }
    }
    return res;
  }
};