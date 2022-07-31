#include <iostream>

#include "vector.hpp"

template<typename T>
double Vec3<T>::getVectorLength(void) {
    return sqrt(x * x + y * y + z * z);
}

template<typename T>   
void Vec3<T>::makeUnitVector(void) {
    double vectorLength = getVectorLength();

    if (vectorLength > 0) {
        double lengthBuffer = 1 / vectorLength;
        x *= lengthBuffer;
        y *= lengthBuffer;
        z *= lengthBuffer;
    }
}

int main(void) {
    Vec3<double> vec;
    vec.x = 2;
    vec.y = 3;
    vec.z = 5;
    
    vec.makeUnitVector();

    std::cout << vec.getVectorLength() << '\n';
}
