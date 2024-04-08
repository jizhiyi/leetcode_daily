#include <algorithm>
#include <unordered_set>
#include <vector>

using std::min;
using std::sort;
using std::unordered_set;
using std::vector;

/*
// 超时，最坏情况 O(n^2)
class Solution {
public:
  int minOperations(vector<int> &nums) {
    int len = nums.size();
    // 去重
    sort(nums.begin(), nums.end());
    vector<int>::iterator newend = std::unique(nums.begin(), nums.end());
    int n = newend - nums.begin();
    int res = len - 1;
    for (int i = 0; i < n; i++) {
      int r = nums[i] + len;
      for (int j = i + 1; j < n && nums[j] < r; j++) {
        res = min(res, len - (j - i + 1));
      }
    }
    return res;
  }
};
*/

class Solution {
public:
  int minOperations(vector<int> &nums) {
    int len = nums.size();
    int res = len - 1;
    // 去重
    sort(nums.begin(), nums.end());
    vector<int>::iterator newend = std::unique(nums.begin(), nums.end());
    int n = newend - nums.begin();
    int j = 0;
    for (int i = 0; i < n; i++) {
      int r = nums[i] + len;
      for (; j < n && nums[j] < r; j++) {
        res = min(res, len - (j - i + 1));
      }
      // 对于 1 2 3 5 6
      // i = 0 时, j 会循环到 3
      // 下一个循环, i = 1, j 直接从3 开始就行了
    }
    return res;
  }
};