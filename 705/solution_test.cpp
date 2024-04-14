#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_705, BasicAssertions) {
  MyHashSet *myHashSet = new MyHashSet();
  myHashSet->add(1); // set = [1]
  myHashSet->add(2); // set = [1, 2]
  EXPECT_EQ(myHashSet->contains(1), true);
  EXPECT_EQ(myHashSet->contains(3), false);
  myHashSet->add(2); // set = [1, 2]
  EXPECT_EQ(myHashSet->contains(2), true);
  myHashSet->remove(2); // set = [1]
  EXPECT_EQ(myHashSet->contains(2), false);
}
