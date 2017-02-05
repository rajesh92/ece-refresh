#pragma once
#include "Rectangle.h"

class Square : public Rectangle {
protected:
    float sideLen;

public:
    Square(float sideLen) : Rectangle(sideLen, sideLen) {
    }
    float Diagonal();


};
