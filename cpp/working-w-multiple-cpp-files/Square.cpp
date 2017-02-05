#include "Square.h"
#include <cmath>
#include <iostream>

float Square::Diagonal() {
    return sqrt(2 * (width*width));
}