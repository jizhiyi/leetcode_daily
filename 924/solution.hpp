#include <algorithm>
#include <vector>

using std::min;
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

    // 并查集初始化,构建
    this->initFather(n);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < i; j++)
        if (graph[i][j])
          join(i, j);

    // 统计每个连通块中病毒的数量
    vector<int> count(n);
    for (int val : initial) {
      ++count[findF(val)];
    }

    // 连通块中数量为1,表示去掉这个病毒是有用的
    int ans = n, mx = 0;
    for (int val : initial) {
      int f = findF(val);
      if (count[f] == 1) {
        int tmps = sz[f];
        if (tmps > mx) {
          mx = tmps;
          ans = val;
        } else if (tmps == mx) {
          ans = min(ans, val);
        }
      }
      if (mx == 0) {
        ans = min(ans, val);
      }
    }

    return ans;
  }
};