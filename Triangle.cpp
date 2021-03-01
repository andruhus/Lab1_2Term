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




