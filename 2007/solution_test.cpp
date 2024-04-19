#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_2007, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.findOriginalArray(*(new vector<int>{1, 3, 4, 2, 6, 8})),
            *(new vector<int>{1, 3, 4}));

  EXPECT_EQ(s.findOriginalArray(*(new vector<int>{6, 3, 0, 1})),
            *(new vector<int>{}));

  EXPECT_EQ(s.findOriginalArray(*(new vector<int>{1})), *(new vector<int>{}));

  EXPECT_EQ(s.findOriginalArray(*(new vector<int>{0, 0, 0, 0})),
            *(new vector<int>{0, 0}));
}
