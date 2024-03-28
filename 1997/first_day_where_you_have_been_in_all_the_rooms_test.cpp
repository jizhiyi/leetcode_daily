#include "first_day_where_you_have_been_in_all_the_rooms.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(count_ways_to_group_overlapping_ranges_test, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.firstDayBeenInAllRooms(*(new vector<int>{0, 0})), 2);
  EXPECT_EQ(s.firstDayBeenInAllRooms(*(new vector<int>{0, 0, 2})), 6);
  EXPECT_EQ(s.firstDayBeenInAllRooms(*(new vector<int>{0, 1, 2, 0})), 6);
}