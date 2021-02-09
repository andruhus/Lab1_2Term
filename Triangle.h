//
// Created by aaade on 08.02.2021.
//

#ifndef LAB1_2TERM_TRIANGLE_H
#define LAB1_2TERM_TRIANGLE_H

struct Point{
    float x,y;
};

struct Vector{
    float x,y;
};

class Triangle {
private:
    Point a,b,c;
    float dist_between_points(Point a,Point b);
public:
    void get_points();
    void get_angle();

};


#endif //LAB1_2TERM_TRIANGLE_H
