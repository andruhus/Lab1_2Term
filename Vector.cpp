//
// Created by aaade on 01.03.2021.
//

#include "Vector.h"




Vector::Vector(Point a, Point b) {
    x = b.x - a.x;
    y = b.y - a.y;
}

Point Vector::get_first_point(Point another) {
    Point res;
    res.x = another.x - x;
    res.y = another.y - y;
    return res;
}

double Vector::get_len() {
    return sqrt((x * x) + (y * y));
}

Point Vector::get_second_point(Point another) {
    Point res;
    res.x = another.x + x;
    res.y = another.y + y;
    return res;
}

void Vector::turn_right(double ang) {
    double x_n = x*cos(ang) - y*sin(ang);
    double y_n = x*sin(ang) + y*cos(ang);
    x = x_n;
    y = y_n;
}
