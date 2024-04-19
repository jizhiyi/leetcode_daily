#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_706, BasicAssertions) {
  MyHashMap *mp = new MyHashMap();
  mp->put(1, 1);
  mp->put(2, 2);
  EXPECT_EQ(mp->get(1), 1);
  EXPECT_EQ(mp->get(3), -1);
  mp->put(2, 1);
  EXPECT_EQ(mp->get(2), 1);
  mp->remove(2);
  EXPECT_EQ(mp->get(2), -1);
}
