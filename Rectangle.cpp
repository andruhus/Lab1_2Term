//
// Created by aaade on 01.03.2021.
//

#include "Rectangle.h"

double Rectangle::Area() {
    return get_len() * get_wid();
}

double Rectangle::Perimeter() {
    return 2 * get_len() + 2 * get_wid();
}

double Rectangle::get_len() {
    Vector len_vec(a,b);
    return len_vec.get_len();
}

double Rectangle::get_wid() {
    Vector wid_vec(c,d);
    return wid_vec.get_len();
}

Point Rectangle::get_centroid() {
    Point res;
    res.x = (a.x+b.x+c.x+d.x)/4;
    res.y = (a.y+b.y+c.y+d.y)/4;
    return res;
}

double Rectangle::diameter() {
    Vector d(a,c);
    return d.get_len();
}

Rectangle::Rectangle(Point pa, Point pb, Point pc) {
    a = pa;
    b = pb;
    c = pc;
    Vector ab(a,b);
    d = ab.get_first_point(c);

}

void Rectangle::to_feature() {
    cout << "The area of the rectangle: " << Area() << endl;
    cout << "The perimeter of the rectangle: " << Perimeter() << endl;
    cout << "The centroid is located at point O(" << get_centroid().x << "," << get_centroid().y << ")" << endl;
}

Rectangle::Rectangle() {
    Point a1,b1,c1,d1;
    a = a1;
    b = b1;
    c = c1;
    d = d1;
}
