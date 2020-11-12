#include "../src/rectangle.cpp"
#include "gtest/gtest.h"

using namespace std;

TEST(testingArea, AreaTestZeroWidth){
    Rectangle *test1 = new Rectangle(0, 3);
    EXPECT_EQ(test1->area(), 0);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
