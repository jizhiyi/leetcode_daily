#include <algorithm>
#include <set>
#include <vector>

using std::min;
using std::set;
using std::vector;

class Solution {
private:
  vector<int> father;
  vector<int> sz;

  void initFather(int n) {
    father = vector<int>(n);
    for (int i = 0; i < n; i++)
      father[i] = i;
    sz = vector<int>(n, 1);
  }

  void join(int a, int b) {
    int fa = findF(a), fb = findF(b);
    if (fa == fb) {
      return;
    }
    father[fa] = fb;
    sz[fb] += sz[fa];
  }

  int findF(int x) { return father[x] == x ? x : father[x] = findF(father[x]); }

public:
  int minMalwareSpread(vector<vector<int>> &graph, vector<int> &initial) {
    int n = graph.size();

    vector<bool> mal(n, false);
    for (const int &val : initial) {
      mal[val] = true;
    }

    // 并查集初始化,构建, 需要排除掉是病毒的点
    this->initFather(n);
    for (int i = 0; i < n; i++)
      if (!mal[i])
        for (int j = 0; j < i; j++)
          if (!mal[j] && graph[i][j])
            join(i, j);

    // 统计病毒点连接了哪些连通块，以及连通块连接病毒的数量
    set<int> setf[n];
    vector<int> count(n);
    for (int val : initial) {
      for (int j = 0; j < n; ++j) {
        if (!mal[j] && graph[val][j]) {
          int fj = findF(j);
          const auto &result = setf[val].insert(fj);
          if (result.second) {
            count[fj]++;
          }
        }
      }
    }
    int ans = n, mx = 0;
    for (int val : initial) {
      int tmps = 0;
      for (int f : setf[val]) {
        // count[f] = 1 说明这是一个割点,去除能减少感染数量
        if (count[f] == 1) {
          tmps += sz[f];
        }
      }
      if (tmps > mx) {
        mx = tmps;
        ans = val;
      } else if (tmps == mx) {
        ans = min(ans, val);
      }
    }

    return ans;
  }
};