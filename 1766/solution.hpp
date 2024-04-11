#include <set>
#include <vector>

using std::set;
using std::vector;

class Solution {
private:
  static const int maxNum = 51;
  // 邻接表
  vector<vector<int>> mp;
  // gcds[i] 记录与i互质的数
  vector<vector<int>> gcds;
  // deps[i] 数字 i 最近出现的深度
  vector<int> deps;
  // indexs[i] 深度i 对应的节点号
  vector<int> indexs;
  vector<int> ans;

  void dfs(const vector<int> &nums, int root, int fa, int dep) {
    int curValue = nums[root];
    // 遍历所有与当前节点的值nums[root]互质的数, 先将最大深度填充到ans[root]中
    for (const auto &val : gcds[curValue]) {
      if (ans[root] < deps[val]) {
        ans[root] = deps[val];
      }
    }
    if (ans[root] != -1) {
      ans[root] = indexs[ans[root]];
    }
    int tmpDeps = deps[curValue];
    deps[curValue] = dep;
    indexs[dep] = root;
    for (const auto &to : mp[root]) {
      if (to == fa) {
        continue;
      }
      dfs(nums, to, root, dep + 1);
    }
    deps[curValue] = tmpDeps;
  }

  int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

public:
  vector<int> getCoprimes(vector<int> &nums, vector<vector<int>> &edges) {
    int n = nums.size();

    mp = vector<vector<int>>(n);
    gcds = vector<vector<int>>(maxNum);
    deps = vector<int>(maxNum, -1);
    indexs = vector<int>(n);
    ans = vector<int>(n, -1);

    for (const auto &e : edges) {
      mp[e[0]].push_back(e[1]);
      mp[e[1]].push_back(e[0]);
    }

    for (int i = 1; i < maxNum; i++)
      for (int j = 1; j < maxNum; j++)
        if (gcd(i, j) == 1)
          gcds[i].push_back(j);

    dfs(nums, 0, 0, 0);

    return ans;
  }
};