#pragma once

#include "Shape.h"

class Rectangle : public Shape {
protected:
    float width;
    float length;
public:
    Rectangle(float w, float l) : width(w), length(l) {

    }
    float Area();
    float Perimeter();
};