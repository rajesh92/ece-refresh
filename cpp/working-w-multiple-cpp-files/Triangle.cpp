#include "Triangle.h"
#include <cmath>

float Triangle::Area() {
    return (base * height) / 2;
}

float Triangle::Side() {
    return sqrt(((0.5*base)*(0.5*base)) + (height * height));
}

float Triangle::Perimeter() {
    float side = sqrt(((0.5*base)*(0.5*base)) + (height * height));
    return (2 * side) + base;
}