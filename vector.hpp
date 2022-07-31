#pragma once

#include <iostream>
#include <math.h>

template<typename T>
class Vec3 {
    
    public:
        Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
        T x, y, z;

        double getVectorLength(void);

        void makeUnitVector(void);

        void printVector(void);
        
};
