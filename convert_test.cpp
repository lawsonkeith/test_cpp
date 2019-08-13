#include "convert.cpp"
#include <gtest/gtest.h>
 
TEST(ConvertTest, OneToTen) 
    { 
    ASSERT_EQ(1, Convert("I"));
    ASSERT_EQ(3, Convert("III"));
    ASSERT_EQ(100, Convert("C"));
    ASSERT_EQ(12, Convert("XII"));
    }

TEST(ConvertTest, OneToTenLower) 
    { 
    ASSERT_EQ(1, Convert("i"));
    ASSERT_EQ(3, Convert("IiI"));
    ASSERT_EQ(100, Convert("c"));
    ASSERT_EQ(12, Convert("XiI"));
    }
 
TEST(ConvertTest, OverRun) 
    {
    ASSERT_EQ(-1, Convert("D"));
    }

TEST(ConvertTest, Error)
    {	
    ASSERT_EQ(-1,Convert("Hi there"));
    ASSERT_EQ(-1,Convert(""));
    }

TEST(ConvertTest, PadError)
    {	
    ASSERT_EQ(3,Convert("III "));
    ASSERT_EQ(1,Convert("  I  "));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
