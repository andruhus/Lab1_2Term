//
// Created by aaade on 08.02.2021.
//
#include <iostream>
#include <math.h>
using namespace std;
#include "Triangle.h"
void Triangle::get_points() {
    cout << "Enter point A: ";
    cin >> a.x >> a.y;
    cout << "Enter point B: ";
    cin >> b.x >> b.y;
    cout << "Enter point C: ";
    cin >> c.x >> c.y;

}





void Triangle::turn_right() {
    Point o;
    Vector ao(a,o);
    Vector bo(b,o);
    Vector co(c,o);

    ao.turn_right(angle_to_turn);
    bo.turn_right(angle_to_turn);
    co.turn_right(angle_to_turn);

    a = ao.get_first_point(o);
    b = bo.get_first_point(o);
    c = co.get_first_point(o);
}


void Triangle::print_coordinates() {
    cout << "A(" << a.x << "," << a.y << ") ";
    cout << "B(" << b.x << "," << b.y << ") ";
    cout << "C(" << c.x << "," << c.y << ") ";
}

void Triangle::to_feature() {
    cout << "Coordinates before turning right:" << endl;
    print_coordinates();
    cout << "Coordinates after turning right:" << endl;
    turn_right();
    print_coordinates();
}

Triangle::Triangle(Point pa, Point pb, Point pc) {
    a = pa;
    b = pb;
    c = pc;
}

void Triangle::set_angle(double ang) {
    angle_to_turn = ang;
}

Triangle::Triangle() {
    Point a1,b1,c1;
    a = a1;
    b = b1;
    c = c1;
}
