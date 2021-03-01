//
// Created by aaade on 08.02.2021.
//

#ifndef LAB1_2TERM_TRIANGLE_H
#define LAB1_2TERM_TRIANGLE_H
#include "Vector.h"


class Triangle {
private:

    float angle_to_turn;

    void get_points();

protected:
    Point a,b,c;
public:
    void get_angle();
    void set_triangle();

public:

    void turn_right();
};


#endif //LAB1_2TERM_TRIANGLE_H
