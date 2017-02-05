#pragma once
#include "Shape.h";

class Circle : public Shape {
protected:
    float radius;
public:
    Circle(float r) : radius(r) {
    }
    float Area();
    float Perimeter();
};