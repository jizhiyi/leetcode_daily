#include <vector>

using std::min;
using std::vector;

class Solution {
public:
  int minimumSum(vector<int> &nums) {
    int n = nums.size();
    vector<int> preMin(n);
    preMin[0] = nums[0];
    for (int i = 1; i < n; i++) {
      preMin[i] = min(nums[i], preMin[i - 1]);
    }
    int r = nums.back();
    int res = 1e5;
    for (int i = n - 2; i > 0; i--) {
      if (preMin[i - 1] < nums[i] && r < nums[i]) {
        res = min(res, preMin[i - 1] + nums[i] + r);
      }
      r = min(r, nums[i]);
    }
    return res == 1e5 ? -1 : res;
  }
};