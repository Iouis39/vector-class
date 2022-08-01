#include <iostream>
#include <cmath>

#include "vector.hpp"

template<typename T>
T Vec3<T>::length() const {
    return sqrt(x * x + y * y + z * z);
}

template<typename T>   
Vec3<T> Vec3<T>::normalize() const {
    T vectorLength = length();
    Vec3<T> unitVector;

    if (vectorLength > 0) {
        double lengthBuffer = 1 / vectorLength;
        unitVector.x = x * lengthBuffer;
        unitVector.y = y * lengthBuffer;
        unitVector.z = z * lengthBuffer;
    }

    return unitVector;
}

template<typename T>
void Vec3<T>::print() {
    std::cout << "X-Coordinate: " << x << '\n';
    std::cout << "Y-Coordinate: " << y << '\n';
    std::cout << "Z-Coordinate: " << z << '\n';
}

