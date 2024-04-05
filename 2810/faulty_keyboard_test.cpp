#include "faulty_keyboard.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(faulty_keyboard, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.finalString("string"), "rtsng");
  EXPECT_EQ(s.finalString("poiinter"), "ponter");
}