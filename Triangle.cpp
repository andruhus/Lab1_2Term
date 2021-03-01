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



void Triangle::turn_right() {
    Point o = get_centroid();
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



void Triangle::print_outer_circle() {
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

