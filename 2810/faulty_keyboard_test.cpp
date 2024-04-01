#include "faulty_keyboard.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(count_ways_to_group_overlapping_ranges_test, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.finalString("string"), "rtsng");
  EXPECT_EQ(s.finalString("poiinter"), "ponter");
}