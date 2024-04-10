#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_1702, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.maximumBinaryString("000110"), "111011");
}
