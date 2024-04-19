#include "solution.hpp"
#include <gtest/gtest.h>

TEST(test_928, BasicAssertions) {
  Solution s;
  //   EXPECT_EQ(s.minMalwareSpread(*(new vector<vector<int>>{
  //                                    {1, 1, 0},
  //                                    {1, 1, 0},
  //                                    {0, 0, 1},
  //                                }),
  //                                *(new vector<int>{0, 1})),
  //             0);
  //   EXPECT_EQ(s.minMalwareSpread(*(new vector<vector<int>>{
  //                                    {1, 1, 0},
  //                                    {1, 1, 1},
  //                                    {0, 1, 1},
  //                                }),
  //                                *(new vector<int>{0, 1})),
  //             1);
  //   EXPECT_EQ(s.minMalwareSpread(*(new vector<vector<int>>{
  //                                    {1, 1, 0, 0},
  //                                    {1, 1, 1, 0},
  //                                    {0, 1, 1, 1},
  //                                    {0, 0, 1, 1},
  //                                }),
  //                                *(new vector<int>{0, 1})),
  //             1);

  //   EXPECT_EQ(s.minMalwareSpread(*(new vector<vector<int>>{
  //                                    {1, 1, 0, 0},
  //                                    {1, 1, 0, 1},
  //                                    {0, 0, 1, 0},
  //                                    {0, 1, 0, 1},
  //                                }),
  //                                *(new vector<int>{3, 0})),
  //             0);

  EXPECT_EQ(s.minMalwareSpread(*(new vector<vector<int>>{
                                   {1, 0, 0, 0, 0, 0, 0},
                                   {0, 1, 0, 0, 0, 1, 0},
                                   {0, 0, 1, 0, 0, 0, 1},
                                   {0, 0, 0, 1, 0, 1, 0},
                                   {0, 0, 0, 0, 1, 0, 1},
                                   {0, 1, 0, 1, 0, 1, 0},
                                   {0, 0, 1, 0, 1, 0, 1},
                               }),
                               *(new vector<int>{0, 1, 6})),
            1);
}
