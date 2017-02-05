#pragma once
#include "Shape.h"

class Triangle : public Shape {
protected:
    float base;
    float height;
public:
    Triangle(float b, float h) : base(b), height(h) {

    }

    float Area();
    float Perimeter();
    float Side();

};