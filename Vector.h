//
// Created by aaade on 01.03.2021.
//

#ifndef LAB1_2TERM_VECTOR_H
#define LAB1_2TERM_VECTOR_H


struct Point{
    double x = 0,y = 0;
};

class Vector{
    double x,y;
public:
    Vector(Point a, Point b);
    void turn_right(double ang);
    Point get_first_point(Point another);
    Point get_second_point(Point another);
    double get_len();
};


#endif //LAB1_2TERM_VECTOR_H
