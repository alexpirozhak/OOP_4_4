#include <gtest/gtest.h>
#include "../Rectangle.h"


TEST(RectangleTest, DefaultConstructor) {
Rectangle r;
EXPECT_DOUBLE_EQ(0.0, r.calculateArea());
}