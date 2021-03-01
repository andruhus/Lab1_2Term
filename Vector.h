//
// Created by aaade on 01.03.2021.
//

#ifndef LAB1_2TERM_VECTOR_H
#define LAB1_2TERM_VECTOR_H


struct Point{
    float x,y;
};

class Vector{
    float x,y;
public:
    Vector(Point a, Point b);
    void turn_right(float ang);
    Point get_first_point(Point another);
    float get_len();
};


#endif //LAB1_2TERM_VECTOR_H
