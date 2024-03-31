#include <string>

using std::string;

class Solution {
public:
  bool isValidSerialization(string preorder) {
    // 需要填充的节点，初始需要填充根节点
    int count = 1;
    for (int i = 0, n = preorder.size(); i < n;) {
      if (count == 0) {
        // 没遍历完就没有能填充的节点了
        return false;
      }
      if (preorder[i] == '#') {
        // 叶子节点
        count--;
        i++;
      } else if (preorder[i] == ',') {
        // 分隔符
        i++;
      } else {
        // 非空节点
        for (; i < n && preorder[i] >= '0' && preorder[i] <= '9'; i++)
          ;
        // 填充自己, 增加两个需要填充的
        count = count - 1 + 2;
      }
    }
    return count == 0;
  }
};