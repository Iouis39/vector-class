#pragma once

#include <iostream>
#include <cmath>


template<typename T>
class Vec3 {
    private:
        T x, y, z;

    public:
        constexpr Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
        constexpr Vec3(const T &xyzValue) : x(xyzValue), y(xyzValue), z(xyzValue) {}
        constexpr Vec3(T xValue, T yValue, T zValue) : x(xValue), y(yValue), z(zValue) {}

        Vec3 operator+(const Vec3<T> &summand) const; 

        Vec3 operator-(const Vec3<T> &subtrahend) const;

        T operator*(const Vec3<T> &factor) const; 

        Vec3 operator*(const T &factor) const;

        T getX();

        T getY();

        T getZ();

        T length() const;

        Vec3<T> normalize() const; 

        Vec3<T> crossProduct(const Vec3<T> vec) const; 

        void print() const;
};

/* ***************************************************************** */

template<typename T>
T Vec3<T>::getX() {
    return x;
}

template<typename T>
T Vec3<T>::getY() {
    return y;
}

template<typename T>
T Vec3<T>::getZ() {
    return z;
}

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
Vec3<T> Vec3<T>::crossProduct(const Vec3<T> vec) const{
    Vec3<T> crossVec;
    crossVec.x = y * vec.z - z * vec.y;
    crossVec.y = z * vec.x - x * vec.z;
    crossVec.z = x * vec.y - y * vec.x;

    return crossVec;
}

template<typename T>
void Vec3<T>::print() const {
    std::cout << "[";
    std::cout << "{\"X\": " << x << ',' << std::endl;
    std::cout << "\"Y\": " << y << ',' << std::endl;
    std::cout << "\"Z\": " << z << "}" << std::endl;
    std::cout << "]" << std::endl;

}

/* ***************************************************************** */

template<typename T>
Vec3<T> Vec3<T>::operator+(const Vec3<T> &summand) const {
    Vec3<T> sum;
    sum.x = x + summand.x;
    sum.y = y + summand.y;
    sum.z = z + summand.z;

    return sum;
}

template<typename T>
Vec3<T> Vec3<T>::operator-(const Vec3<T> &subtrahend) const {
    Vec3<T> diff;
    diff.x = x - subtrahend.x;
    diff.y = y - subtrahend.y;
    diff.z = z - subtrahend.z;

    return diff;
}

template<typename T>
T Vec3<T>::operator*(const Vec3<T> &factor) const {
    T scalar;
    scalar = x * factor.x + y * factor.y + z * factor.z;

    return scalar;
}

template<typename T>
Vec3<T> Vec3<T>::operator*(const T &factor) const {
    Vec3<T> product;
    product.x = x * factor;
    product.y = y * factor;
    product.z = z * factor;

    return product;
}
