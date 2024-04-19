
#include <algorithm>
#include <numeric>
#include <vector>

using std::accumulate;
using std::min;
using std::vector;

class Solution {
public:
  int minSkips(vector<int> &dist, int speed, int hoursBefore) {
    if (accumulate(dist.begin(), dist.end(), 0) >
        (long long)speed * hoursBefore) {
      return -1;
    }
    int n = dist.size();
    vector<int> dp(n);
    for (int i = 0;; i++) {
      int pre = 0;
      for (int j = 0; j < n - 1; j++) {
        int tmp = dp[j + 1];
        dp[j + 1] = (dp[j] + dist[j] + speed - 1) / speed * speed;
        if (i) {
          dp[j + 1] = min(dp[j + 1], pre + dist[j]);
        }
        pre = tmp;
      }
      if (dp[n - 1] + dist[n - 1] <= (long long)speed * hoursBefore) {
        return i;
      }
    }
  }
};