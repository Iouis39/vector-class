#include "vector.hpp"

#include <iostream>

int main() {
    Vec3<double> vec(2, 1, 1);
    Vec3<double> vec2;
    double factor = 2;

    vec2 = vec * factor;

    vec.print();
    vec2.print();

    return 0;
}
