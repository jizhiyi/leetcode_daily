#include <vector>

using std::vector;

class Solution {
public:
  static const int mod = 1e9 + 7;
  int firstDayBeenInAllRooms(vector<int> &nextVisit) {
    int n = nextVisit.size();
    /// dp[i][0] 访问i号房奇数次到达的时间
    /// dp[i][1] ..... 偶数次....
    vector<vector<int>> dp = vector<vector<int>>(n, vector<int>(2));
    /// 0 <= nextVisit[i] <= i 很重要的条件
    dp[0][1] = 1;
    for (int i = 1; i < n; i++) {
      dp[i][0] = (dp[i - 1][1] + 1) % mod;
      /// dp[i][0] + 1 -> nextVisit[i]
      /// dp[i][1] - dp[nextVisit[i]] -> 从nextVisit[i] 到 i-1 的偶数次要的时间
      /// +1 就是 dp[i][1]
      long long tmp =
          ((long long)dp[i][0] + 1 +
           ((long long)mod + dp[i - 1][1] - dp[nextVisit[i]][0]) + 1) %
          mod;
      dp[i][1] = tmp;
    }
    return dp[n - 1][0];
  }
};