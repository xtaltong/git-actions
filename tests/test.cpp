#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(testingArea, AreaTestZeroWidth){
    Rectangle *test1 = new Rectangle(0, 3);
    EXPECT_EQ(test1->area(), 0);
}

TEST(RectangleTest, RectangleWidthNone){
    Rectangle* test = new Rectangle();
    EXPECT_EQ(test->width, 0);
}

TEST(RectangleTest, RectangleHeightNone){
    Rectangle* test = new Rectangle();
    EXPECT_EQ(test->height, 0);
}

TEST(RectangleTest, RectangleWidthInt){
    Rectangle* test = new Rectangle(2, 8);
    EXPECT_EQ(test->width, 2);
}

TEST(RectangleTest, RectangleHeightInt){
    Rectangle* test = new Rectangle(2, 8);
    EXPECT_EQ(test->height, 8);
}

TEST(RectangleTest, RectangleAreaInt){
    Rectangle* test = new Rectangle(2, 8);
    EXPECT_EQ(test->area, 16);
}

TEST(RectangleTest, RectangleChangeWidth){
    Rectangle* test = new Rectangle(4, 5);
    set_width(7);
    EXPECT_EQ(test->width, 7);
}

TEST(RectangleTest, RectangleChangeHeight){
    Rectangle* test = new Rectangle(4, 5);
    set_height(7);
    EXPECT_EQ(test->height, 7);
}

TEST(RectangleTest, RectangleChangeArea){
    Rectangle* test = new Rectangle(4, 5);
    set_width(7);
    EXPECT_EQ(test->area, 35);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
