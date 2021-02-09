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