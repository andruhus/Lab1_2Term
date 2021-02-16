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

float Triangle::dist_between_points(Point a, Point b) {
    float g = a.x - b.x;
    float z = a.y - b.y;
    return sqrt(g * g + z * z);
}

void Triangle::set_triangle() {
    float ab,ac,bc;
    bool passed;
    do{
        get_points();
        ab = dist_between_points(a,b);
        ac = dist_between_points(a,c);
        bc = dist_between_points(b,c);
        passed = ab + bc <= ac || ab + ac <= bc || bc + ac <= ab;
        if(passed){
            cout << "The points form a line" << endl;
        }
    } while (passed);
}

void Triangle::get_angle() {
    cout << "Enter the Angle in gradus: ";
    cin >> angle_to_turn;

    float pi = atan(1) * 4.0;
    angle_to_turn = angle_to_turn/180.0 * pi;
    while (angle_to_turn > 2.0 * pi)
        angle_to_turn -= 2.0 * pi;
}

Point Triangle::get_centroid() {
    Point center;
    center.x = a.x + b.x + c.x;
    center.x /= 3.0;
    center.y = a.y + b.y + c.y;
    center.y /= 3.0;
    return center;
}

void Vector::turn_right(float ang) {
    float length = sqrt((x * x) + (y * y));
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

void Triangle::turn_right() {
    Vector ao(a,get_centroid());
    Vector bo(b,get_centroid());
    Vector co(c,get_centroid());

    ao.turn_right(angle_to_turn);
    bo.turn_right(angle_to_turn);
    co.turn_right(angle_to_turn);


}

Vector::Vector(Point a, Point b) {
    x = b.x - a.x;
    y = b.y - a.y;
}