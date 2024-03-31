#include <algorithm>
#include <vector>

using std::sort;
using std::vector;

class Solution {
public:
  int minimumAddedCoins(vector<int> &coins, int target) {
    sort(coins.begin(), coins.end());
    int ans = 0;
    int x = 1;
    int i = 0;
    int n = coins.size();
    while (x <= target) {
      if (i < n && coins[i] <= x) {
        x += coins[i];
        i++;
      } else {
        x *= 2;
        ans++;
      }
    }
    return ans;
  }
};