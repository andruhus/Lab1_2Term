//
// Created by aaade on 01.03.2021.
//

#ifndef LAB1_2TERM_RECTANGLE_H
#define LAB1_2TERM_RECTANGLE_H
#include "Vector.h"

class Rectangle {
protected:
    Point a,b,c,d;

public:
    double Area();

    double Perimeter();

    double get_len();

    double get_wid();

    Point get_centroid();

    double diameter();

    Rectangle(Point a,Point b, Point c);
};


#endif //LAB1_2TERM_RECTANGLE_H
