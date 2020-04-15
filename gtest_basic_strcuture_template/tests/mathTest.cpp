#include "gtest/gtest.h"
#include "math.hpp"

TEST(mathTest, basicTest_addition)
{
    float a = 3;
    float b = 2;
    math m;
    EXPECT_FLOAT_EQ(5, m.add(a,b));
}

TEST(mathTest, basicTest_multiplication)
{
    float a = 3;
    float b = 2;
    math m;
    EXPECT_FLOAT_EQ(6, m.multiply(a,b));
}
