//
// Created by aaade on 02.03.2021.
//

#include "UserMenu.h"
#include "Right_Triangle.h"
#include "Square.h"
#include "Rectangle.cpp"
#include "Vector.cpp"
#include "Triangle.cpp"
#include "Square.cpp"
#include "Right_Triangle.cpp"

void UserMenu::Start() {
    system("cls");
    cout << options;
    int choise;
    cin >> choise;

    switch (choise) {
        case 1: {
            SetFigure();
            break;
        }
        case 2: {
            Feature();
            break;
        }
        default:
            break;

    }
}

void UserMenu::SetFigure() {
    //system("cls");
    const string types = "1. Triangle\n2. Right_Triangle\n3. Rectangle\n'Something else'. Square\nChoose your option: ";
    cout << types;
    int choise;
    cin >> choise;

    switch (choise) {
        case 1: {
            Point a, b, c;
            a = SetPoint();
            b = SetPoint();
            c = SetPoint();
            figure = new Triangle(a, b, c);
            break;
        }
        case 2: {
            Point a, b;
            a = SetPoint();
            b = SetPoint();
            figure = new Right_Triangle(a, b);
            break;
        }
        case 3: {
            Point a, b, c;
            a = SetPoint();
            b = SetPoint();
            c = SetPoint();
            figure = new Rectangle(a, b, c);
            break;
        }
        default: {
            Point a, b;
            a = SetPoint();
            b = SetPoint();
            figure = new Square(a, b);
            break;
        }

    }
    Start();
}


void UserMenu::Feature() {
    //system("cls");
    if (figure != nullptr) {
        figure->to_feature();
        cout << endl << endl;
    } else
        cout << "Set your figure first" << endl << endl;
    Start();
}

Point UserMenu::SetPoint() {
    Point res;
    cout << "Setting the point ..." << endl;
    cout << "Enter value x: ";
    cin >> res.x;
    cout << "Enter value y: ";
    cin >> res.y;
    return res;
}
