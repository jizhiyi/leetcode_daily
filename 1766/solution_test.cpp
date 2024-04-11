#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_1766, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.getCoprimes(*(new vector<int>{2, 3, 3, 2}),
                          *(new vector<vector<int>>{{0, 1}, {1, 2}, {1, 3}})),
            *(new vector<int>{-1, 0, 0, 1}));
  EXPECT_EQ(s.getCoprimes(*(new vector<int>{5, 6, 10, 2, 3, 6, 15}),
                          *(new vector<vector<int>>{
                              {0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}})),
            *(new vector<int>{-1, 0, -1, 0, 0, 0, -1}));
}
