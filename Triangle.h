//
// Created by aaade on 08.02.2021.
//

#ifndef LAB1_2TERM_TRIANGLE_H
#define LAB1_2TERM_TRIANGLE_H
#include "Figure.h"


class Triangle : public Figure {
private:



    void get_points();

protected:
    Point a,b,c;
    float angle_to_turn = atan(1)*2;
public:
    void set_angle(double ang);
    //void set_triangle();
    Triangle();
    Triangle(Point pa,Point pb, Point pc);

public:
    void print_coordinates();
    void turn_right();
    void to_feature();

};


#endif //LAB1_2TERM_TRIANGLE_H
