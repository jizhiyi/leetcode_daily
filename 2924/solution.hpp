#include <vector>

using std::vector;

class Solution {
public:
  int findChampion(int n, vector<vector<int>> &edges) {
    vector<int> du(n, 0);
    for (const auto &edge : edges) {
      du[edge[1]]++;
    }
    int res = -1;
    for (int i = 0; i < n; i++) {
      if (du[i] == 0) {
        if (res == -1) {
          res = i;
        } else {
          return -1;
        }
      }
    }
    return res;
  }
};