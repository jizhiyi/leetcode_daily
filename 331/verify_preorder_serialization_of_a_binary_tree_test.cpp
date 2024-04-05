#include "verify_preorder_serialization_of_a_binary_tree.hpp"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(verify_preorder_serialization_of_a_binary_tree, BasicAssertions) {
  Solution s;
  EXPECT_EQ(s.isValidSerialization("9,3,4,#,#,1,#,#,2,#,6,#,#"), true);
  EXPECT_EQ(s.isValidSerialization("1,#"), false);
  EXPECT_EQ(s.isValidSerialization("9,#,#,1"), false);
}