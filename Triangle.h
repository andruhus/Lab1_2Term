//
// Created by aaade on 08.02.2021.
//

#ifndef LAB1_2TERM_TRIANGLE_H
#define LAB1_2TERM_TRIANGLE_H
#include "Vector.h"


class Triangle {
private:
    Point a,b,c;
    float angle_to_turn;
    float dist_between_points(Point a,Point b);
    void get_points();
public:
    void get_angle();
    void set_triangle();

public:
    Point get_centroid();
    void turn_right();
    void print_outer_circle();
};


#endif //LAB1_2TERM_TRIANGLE_H
