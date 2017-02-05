#include "Rectangle.h"

float Rectangle::Area(){
    return width * length;
}

float Rectangle::Perimeter() {
    return 2 * (width + length);
}