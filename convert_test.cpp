#include "convert.cpp"
#include <gtest/gtest.h>
 
TEST(ConvertTest, PositiveNos) 
    { 
    ASSERT_EQ(6, Convert(36.0));
    ASSERT_EQ(18.0, Convert(324.0));
    ASSERT_EQ(25.4, Convert(645.16));
    ASSERT_EQ(0, Convert(0.0));
    }
 
TEST(ConvertTest, NegativeNos) 
    {
    ASSERT_EQ(-1.0, Convert(-15.0));
    ASSERT_EQ(-1.0, Convert(-0.2));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
