//
// Created by aaade on 01.03.2021.
//

#ifndef LAB1_2TERM_SQUARE_H
#define LAB1_2TERM_SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(Point a,Point b);
    double get_outer_radius();
    double get_inner_radius();
    void to_feature();
};


#endif //LAB1_2TERM_SQUARE_H
