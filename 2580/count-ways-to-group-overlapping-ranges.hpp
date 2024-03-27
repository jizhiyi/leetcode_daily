#include <algorithm>
#include <vector>

using std::max;
using std::sort;
using std::vector;

class Solution {
public:
  static const int mod = 1e9 + 7;
  int countWays(vector<vector<int>> &ranges) {
    sort(ranges.begin(), ranges.end(),
         [](const vector<int> &a, const vector<int> &b) {
           if (a[0] == b[0]) {
             return a[1] < b[1];
           }
           return a[0] < b[0];
         });
    int res = 1;
    for (int i = 0, len = ranges.size(); i < len;) {
      int r = ranges[i][1];
      int j = i + 1;
      for (; j < len && r >= ranges[j][0]; j++) {
        r = max(r, ranges[j][1]);
      }
      i = j;
      res = res * 2 % mod;
    }
    return res;
  }
};