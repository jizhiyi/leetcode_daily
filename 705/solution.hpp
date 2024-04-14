#include <vector>

using std::vector;

class MyHashSet {
  vector<bool> set;

public:
  MyHashSet() { set = vector<bool>(1e6 + 5); }

  void add(int key) { set[key] = true; }

  void remove(int key) { set[key] = false; }

  bool contains(int key) { return set[key]; }
};