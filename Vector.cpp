//
// Created by aaade on 01.03.2021.
//

#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;


void Vector::turn_right(float ang) {
    float length = get_len();
    float vec_ang;
    float pi = atan(1) * 4.0;


    if (abs(x) < 0.1)
    {
        if (y >= 0) vec_ang = pi / 2.0;
        else vec_ang = 3.0 * pi / 2.0;
        cout << vec_ang << endl;
        vec_ang -= ang;
        x = length * cos(vec_ang);
        y = length * sin(vec_ang);
        return;
    }
    if (x >= 0) vec_ang = atan(y / x);
    else vec_ang = atan(y / x) + pi;

    vec_ang -= ang;
    x = length * cos(vec_ang);
    y = length * sin(vec_ang);
}

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
