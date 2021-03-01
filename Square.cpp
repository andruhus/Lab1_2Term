//
// Created by aaade on 01.03.2021.
//

#include "Square.h"

double Square::Area() {
    return get_len() * get_wid();
}

double Square::Perimeter() {
    return 2 * get_len() + 2 * get_wid();
}

double Square::get_len() {
    Vector len_vec(a,b);
    return len_vec.get_len();
}

double Square::get_wid() {
    Vector wid_vec(c,d);
    return wid_vec.get_len();
}

Point Square::get_centroid() {
    Point res;
    res.x = (a.x+b.x+c.x+d.x)/4;
    res.y = (a.y+b.y+c.y+d.y)/4;
    return res;
}

double Square::diameter() {
    Vector d(a,c);
    return d.get_len();
}

Square::Square(Point pa, Point pb, Point pc) {
    a = pa;
    b = pb;
    c = pc;
    Vector ab(a,b);
    d = ab.get_first_point(c);

}