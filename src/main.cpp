#include "vector.hpp"

#include <iostream>

int main() {
    Vec3<double> vec;
    vec.x = 5;
    vec.y = 1;
    vec.z = 3;

    Vec3<double> unitVec = vec.normalize();

    std::cout << unitVec.length() << '\n';

    return 0;
}
