//
// Created by aaade on 02.03.2021.
//

#ifndef LAB1_2TERM_USERMENU_H
#define LAB1_2TERM_USERMENU_H
#include "Figure.h"
#include <string>
class UserMenu {
private:
    Figure* figure = nullptr;
    const string options = "1. Set your figure\n"
                           "2. Feature it\n"
                           "'Something else'. Exit\n"
                           "Choose your option: ";
    void SetFigure();

    void Feature();
    Point SetPoint();
public:
    void Start();


};


#endif //LAB1_2TERM_USERMENU_H
