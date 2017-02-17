// main.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include "Square.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"
#include <iostream>


using namespace std;

int main()
{
    Circle c(3);
    Rectangle r(4, 5);
    Square s(6);
    Triangle t(6, 6); // t(base,height)

    cout << "Circle:" << endl;
    cout << "Area: " << c.Area() << endl;
    cout << "Perimeter: " << c.Perimeter() << endl;
    cout << endl;

    cout << "Rectangle:" << endl;
    cout << "Area: " << r.Area() << endl;
    cout << "Perimeter: " << r.Perimeter() << endl;
    cout << endl;

    cout << "Square:" << endl;
    cout << "Area: " << s.Area() << endl;
    cout << "Perimeter: " << s.Perimeter() << endl;
    cout << "Diagonal: " << s.Diagonal() << endl;
    cout << endl;

    cout << "Triangle:" << endl;
    cout << "Area: " << t.Area() << endl;
    cout << "Side: " << t.Side() << endl;
    cout << "Perimeter: " << t.Perimeter() << endl;
    cout << endl;

    return 0;
}