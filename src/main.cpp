#include "vector.hpp"

#include <iostream>

int main() {
    Vec3<double> vec(2, 3, 4);
    Vec3<double> vec2(4, 5, 6);
    Vec3<double> vec3;

    vec3 = vec + vec2;

    vec.print();
    vec2.print();
    vec3.print();
    return 0;
}
