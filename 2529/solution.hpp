#include <algorithm>
#include <vector>

using std::max;
using std::vector;

class Solution {
public:
  int maximumCount(vector<int> &nums) {
    int z = 0, f = 0;
    for (auto &val : nums) {
      if (val < 0) {
        f++;
      } else if (val > 0) {
        z++;
      }
    }
    return max(z, f);
  }
};