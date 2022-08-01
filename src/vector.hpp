#pragma once

#include <iostream>
#include <cmath>


template<typename T>
class Vec3 {

    public:
        Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
        Vec3(const T &xyzValue) : x(xyzValue), y(xyzValue), z(xyzValue) {}
        Vec3(T xValue, T yValue, T zValue) : x(xValue), y(yValue), z(zValue) {}
        T x, y, z;

        Vec3 operator+(Vec3<T> vec) {
           Vec3<T> sum;
           sum.x = x + vec.x;
           sum.y = y + vec.y;
           sum.z = z + vec.z;

           return sum;
        } 

        T length() const {
            return sqrt(x * x + y * y + z * z);
        }

        Vec3<T> normalize() const {
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

        void print() {
            std::cout << "[";
            std::cout << "{\"X\": " << x << ',' << std::endl;
            std::cout << "\"Y\": " << y << ',' << std::endl;
            std::cout << "\"Z\": " << x << "}" << std::endl;
            std::cout << "]" << std::endl;
        }
        
};

