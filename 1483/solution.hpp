#include <vector>

using std::vector;

class TreeAncestor {
private:
  // 2^16 够用了
  static const int mxLevel = 17;
  // 储存倍增信息
  vector<vector<int>> father;

public:
  TreeAncestor(int n, vector<int> &parent) {
    // 构造倍增信息
    father = vector<vector<int>>(n, vector<int>(mxLevel, -1));
    for (int i = 0; i < n; i++) {
      father[i][0] = parent[i];
    }
    for (int level = 1; level < mxLevel; level++) {
      for (int i = 0; i < n; i++) {
        if (father[i][level - 1] != -1) {
          father[i][level] = father[father[i][level - 1]][level - 1];
        }
      }
    }
  }

  int getKthAncestor(int node, int k) {
    for (int level = 0; level < mxLevel; level++) {
      if ((k >> level) & 1) {
        node = father[node][level];
        if (node == -1) {
          break;
        }
      }
    }
    return node;
  }
};