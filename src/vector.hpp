#pragma once

template<typename T>
class Vec3 {
    
    public:
        Vec3() : x(T(0)), y(T(0)), z(T(0)) {}
        T x, y, z;

        T length() const;

        Vec3<T> normalize() const;

        void print();
        
};
