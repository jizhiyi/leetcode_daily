#include <algorithm>
#include <cstdlib>

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
private:
  int dfs(TreeNode *root, int mx, int mi) {
    if (root == nullptr) {
      return 0;
    }
    int res = std::max(abs(root->val - mx), abs(root->val - mi));
    // 维护根节点到每个节点的路径上的最值
    mx = std::max(root->val, mx);
    mi = std::min(root->val, mi);
    res = std::max(res, dfs(root->left, mx, mi));
    res = std::max(res, dfs(root->right, mx, mi));
    return res;
  }

public:
  int maxAncestorDiff(TreeNode *root) {
    return dfs(root, root->val, root->val);
  }
};