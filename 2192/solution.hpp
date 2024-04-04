#include <algorithm>
#include <unordered_set>
#include <vector>

using std::unordered_set;
using std::vector;

class Solution {
public:
  vector<vector<int>> getAncestors(int n, vector<vector<int>> &edges) {
    // 反向建图
    vector<vector<int>> g(n);
    for (auto &edge : edges) {
      g[edge[1]].push_back(edge[0]);
    }

    vector<std::unordered_set<int>> tmp(n);
    for (int i = 0; i < n; i++) {
      if (!tmp[i].empty() || g[i].empty())
        continue;
      dfs(i, g, tmp);
    }

    vector<vector<int>> res(n);
    for (int i = 0; i < n; i++) {
      res[i].insert(res[i].begin(), tmp[i].begin(), tmp[i].end());
      std::sort(res[i].begin(), res[i].end());
    }
    return res;
  }

  void dfs(int u, vector<vector<int>> &g, vector<unordered_set<int>> &tmp) {
    for (auto &v : g[u]) {
      tmp[u].emplace(v);
      if (tmp[v].empty() && !g[u].empty()) {
        dfs(v, g, tmp);
      }
      if (!tmp[v].empty()) {
        tmp[u].insert(tmp[v].begin(), tmp[v].end());
      }
    }
  }
};
