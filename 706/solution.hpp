#include <vector>

using std::vector;

class MyHashMap {
private:
  vector<int> vec;

public:
  MyHashMap() { vec = vector<int>(1e6 + 5, -1); }

  void put(int key, int value) { vec[key] = value; }

  int get(int key) { return vec[key]; }

  void remove(int key) { vec[key] = -1; }
};