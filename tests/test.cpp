#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(testingArea, AreaTestZeroWidth){
    Rectangle *test1 = new Rectangle(0, 3);
    EXPECT_EQ(test1->area(), 0);
}

TEST(ConstructorTest, NoInputArea){
    Rectangle* test = new Rectangle();
    EXPECT_EQ(test->area(), 0);
}

TEST(ConstructorTest, NoInputPerimeter){
    Rectangle* test = new Rectangle();
    EXPECT_EQ(test->perimeter(), 0);
}

TEST(PerimeterTest, IntInputPerimeter){
    Rectangle* test = new Rectangle(2, 8);
    EXPECT_EQ(test->perimeter(), 20);
}

TEST(testingArea, IntInputArea){
    Rectangle* test = new Rectangle(2, 8);
    EXPECT_EQ(test->area(), 16);
}

TEST(PerimeterTest, ZeroHeightPerimeter){
    Rectangle* test = new Rectangle(2, 0);
    EXPECT_EQ(test->perimeter(), 4);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
