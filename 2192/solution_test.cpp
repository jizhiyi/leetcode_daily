#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2192, BasicAssertions) {
  Solution s;
  auto res = s.getAncestors(8, *(new vector<vector<int>>{{0, 3},
                                                         {0, 4},
                                                         {1, 3},
                                                         {2, 4},
                                                         {2, 7},
                                                         {3, 5},
                                                         {3, 6},
                                                         {3, 7},
                                                         {4, 6}}));
  for (int i = 0; i < res.size(); i++) {
    GTEST_LOG_(INFO) << "i:" << i << " size:" << res[i].size();
    for (auto val : res[i]) {
      GTEST_LOG_(INFO) << val;
    }
  }
}