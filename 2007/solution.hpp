#include <map>
#include <vector>

using std::map;
using std::vector;

class Solution {
public:
  vector<int> findOriginalArray(vector<int> &changed) {
    map<int, int> mp;
    for (auto &val : changed) {
      mp[val]++;
    }
    vector<int> ans(0);
    if (mp[0] != 0) {
      if (mp[0] % 2 != 0) {
        return {};
      } else {
        ans.resize(mp[0] / 2, 0);
      }
    }
    for (auto &kv : mp) {
      if (kv.second == 0) {
        continue;
      }
      if (mp[kv.first * 2] < kv.second) {
        return {};
      }
      mp[kv.first * 2] -= kv.second;
      ans.resize(ans.size() + kv.second, kv.first);
    }
    return ans;
  }
};