#include <vector>

using std::vector;

class Solution {
public:
  int findChampion(vector<vector<int>> &grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
      int tmp = 0;
      for (const auto &val : grid[i]) {
        tmp += val;
      }
      if (tmp == n - 1) {
        return i;
      }
    }
    return 0;
  }
};