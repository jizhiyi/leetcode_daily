#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using std::string;
using std::unordered_map;
using std::unordered_set;
using std::vector;

class ThroneInheritance {
private:
  // 邻接表储存数据
  unordered_map<string, vector<string>> mp;
  // 储存死亡的
  unordered_set<string> deads;
  string king;

  void dfs(const string &fa, vector<string> &res) {
    if (!deads.count(fa)) {
      res.push_back(fa);
    }
    for (const auto &son : mp[fa]) {
      dfs(son, res);
    }
  }

public:
  ThroneInheritance(string kingName) : king(kingName) {}

  void birth(string parentName, string childName) {
    mp[parentName].push_back(childName);
  }

  void death(string name) { deads.insert(name); }

  vector<string> getInheritanceOrder() {
    vector<string> res;
    dfs(king, res);
    return res;
  }
};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */