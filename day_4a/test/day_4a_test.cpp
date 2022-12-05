#include <string>
#include <gtest/gtest.h>


#include "day_4a.hpp"

const std::string example{R"EOS(2-4,6-8
2-3,4-5
5-7,7-9
2-8,3-7
6-6,4-6
2-6,4-8)EOS"};

TEST(Day4aTest, Example) {
    EXPECT_EQ(aoc::day_4a(example), 2);
}