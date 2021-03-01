//
// Created by aaade on 01.03.2021.
//

#include "Square.h"

Square::Square(Point pa, Point pb) {
    a = pa;
    b = pb;
    Vector ab(a,b);
    double three_pi_over_two = 6 * atan(1);
    ab.turn_right(three_pi_over_two);
    d = ab.get_second_point(a);
    c = ab.get_second_point(b);
}

double Square::get_inner_radius() {
    return get_len()/2;
}

double Square::get_outer_radius() {
    return get_len()*sqrt(2)/2
}