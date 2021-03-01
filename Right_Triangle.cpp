//
// Created by aaade on 01.03.2021.
//

#include "Right_Triangle.h"
#include <iostream>
using  namespace std;

Point Right_Triangle::get_centroid() {
    Point center;
    center.x = a.x + b.x + c.x;
    center.x /= 3.0;
    center.y = a.y + b.y + c.y;
    center.y /= 3.0;
    return center;
}


void Right_Triangle::print_outer_circle() {
    Point centroid = get_centroid();
    Vector ao(a,centroid);
    float radius = ao.get_len();
    if (centroid.x >= 0 && centroid.y >= 0)
        cout << "Our circle: (x - " << centroid.x << ")^2 + (y - " << centroid.y << ")^2 = " << radius * radius << endl;
    else if (centroid.x < 0 && centroid.y >= 0)
        cout << "Our circle: (x + " << abs(centroid.x) << ")^2 + (y - " << centroid.y << ")^2 = " << radius * radius << endl;
    else if (centroid.x >= 0 && centroid.y < 0)
        cout << "Our circle: (x - " << centroid.x << ")^2 + (y + " << abs(centroid.y) << ")^2 = " << radius * radius << endl;
    else
        cout << "Our circle: (x + " << abs(centroid.x) << ")^2 + (y + " << abs(centroid.y) << ")^2 = " << radius * radius << endl;
}

Right_Triangle::Right_Triangle(Point pa, Point pb) {
    a = pa;
    b = pb;
    double ang = 4 * atan(1)/3;
    Vector ab(a,b);
    ab.turn_right(ang);
    c = ab.get_second_point(a);
}