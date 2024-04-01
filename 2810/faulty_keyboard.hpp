#include <list>
#include <string>

using std::list;
using std::string;

class Solution {
public:
  string finalString(string s) {
    list<char> li;
    bool pushBack = true;
    for (auto &c : s) {
      if (c == 'i') {
        pushBack = !pushBack;
      } else {
        if (pushBack) {
          li.push_back(c);
        } else {
          li.push_front(c);
        }
      }
    }
    return pushBack ? string(li.begin(), li.end())
                    : string(li.rbegin(), li.rend());
  }
};