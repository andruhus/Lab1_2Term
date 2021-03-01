//
// Created by aaade on 01.03.2021.
//

#ifndef LAB1_2TERM_RIGHT_TRIANGLE_H
#define LAB1_2TERM_RIGHT_TRIANGLE_H
#include "Triangle.h"

class Right_Triangle : public Triangle {
public:

    Right_Triangle(Point pa,Point pb);
    Point get_centroid();
    void print_outer_circle();
};


#endif //LAB1_2TERM_RIGHT_TRIANGLE_H
