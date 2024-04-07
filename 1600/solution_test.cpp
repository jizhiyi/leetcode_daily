#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_1600, BasicAssertions) {
  ThroneInheritance *t = new ThroneInheritance("king");
  t->birth("king", "andy");
  t->birth("king", "bob");
  t->birth("king", "catherine");
  t->birth("andy", "matthew");
  t->birth("bob", "alex");
  t->birth("bob", "asha");

  vector<string> tmp{"king", "andy", "matthew",  "bob",
                     "alex", "asha", "catherine"};
  EXPECT_EQ(t->getInheritanceOrder(), tmp);

  t->death("bob");
  vector<string> tmp1{"king", "andy", "matthew", "alex", "asha", "catherine"};
  EXPECT_EQ(t->getInheritanceOrder(), tmp1);
}
