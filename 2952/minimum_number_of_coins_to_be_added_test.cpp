#include "minimum_number_of_coins_to_be_added.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(minimum_number_of_coins_to_be_added, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.minimumAddedCoins(*(new vector<int>{1, 4, 10}), 19), 2);
  EXPECT_EQ(s.minimumAddedCoins(*(new vector<int>{1, 4, 10, 5, 7, 19}), 19), 1);
  EXPECT_EQ(s.minimumAddedCoins(*(new vector<int>{1, 1, 1}), 20), 3);
}