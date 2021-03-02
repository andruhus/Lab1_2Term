/*
#include "Triangle.h"


int main() {

    return 0;
}
*/
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Square.h"
#include "Rectangle.cpp"
#include "Vector.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include "Right_Triangle.cpp"
#include "Right_Triangle.h"
TEST(Figure, Rectangle) {

    Point a,b,c;
    Rectangle rec(a,b,c);
    rec.to_feature();
    ASSERT_EQ(0, rec.Area());
    ASSERT_EQ(0, rec.Perimeter());
}

TEST(Figure, Square){
    Point a,b;
    b.y = 1;
    Square sq(a,b);
    sq.to_feature();
    ASSERT_EQ(1, sq.Area());
    ASSERT_EQ(4, sq.Perimeter());
}

TEST(Figure, Triangle){
    Point a,b,c;
    b.x = 1;
    c.y = 2;
    Triangle tr1(a,b,c);
    b.x = 0;
    b.y = 1;
    c.x = -2;
    c.y = 0;
    Triangle tr2(a,b,c);
    tr1.set_angle(2 * atan(1));
    tr1.turn_right();

    tr2.to_feature();
}

TEST(Figure, Right_Triangle){
    Point a,b;
    b.x = 1;
    Right_Triangle rt(a,b);
    Point o;
    o.x = 1.0/2;
    o.y = sqrt(3)/6;
    ASSERT_EQ(o,rt.get_centroid());
    rt.to_feature();
}

int main(int argc, char *argv[]) {

    testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}