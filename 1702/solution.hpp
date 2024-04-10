#include <string>

using std::string;

class Solution {
public:
  string maximumBinaryString(string binary) {
    int j = 0;
    for (int i = 0, n = binary.size(); i < n; i++) {
      if (binary[i] == '0') {
        // 只要 0 后面还能找到1 且1后面还有0
        // 如  0110 -> 1011
        while (j <= i || (j < n && binary[j] == '1')) {
          j++;
        }
        if (j < n) {
          binary[i] = '1';
          binary[j] = '1';
          binary[i + 1] = '0';
        }
      }
    }
    return binary;
  }
};