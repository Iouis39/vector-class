#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"

#include "vector.hpp"

/*TEST_CASE("testing Vec3 -- simple normalization") {
    Vec3<int> Vec(1, 3, 4);

    Vec3<int> unitVec = Vec.normalize();
    CHECK(unitVec.length() == 1);
}*/

TEST_CASE("testing Vec3 -- complex normalization") {
    Vec3<double> Vec(3.46, 7.233, 4.6);

    Vec3<double> unitVec = Vec.normalize();
    CHECK(unitVec.length() == 1);
}

TEST_CASE("testing Vec3 -- simple addition") {
    Vec3<int> Vec1(2, 5, 3);
    Vec3<int> Vec2(6, 9, 10);
    Vec3<int> Vec3;

    Vec3 = Vec1 + Vec2;
    CHECK(Vec3.x == 8);
    CHECK(Vec3.y == 14);
    CHECK(Vec3.z == 13);
}

TEST_CASE("testing Vec3 -- complex addition") {
    Vec3<double> Vec1(4.89, 7.283, 2.9);
    Vec3<double> Vec2(1.123, 2.9, 5.662);
    Vec3<double> Vec3;

    Vec3 = Vec1 + Vec2;
    CHECK(Vec3.x == 6.013);
    CHECK(Vec3.y == 10.183);
    CHECK(Vec3.z == 8.562);
}

TEST_CASE("testing Vec3 -- simple subtraction") {
    Vec3<int> Vec1(2, 5, 3);
    Vec3<int> Vec2(6, 9, 10);
    Vec3<int> Vec3;

    Vec3 = Vec1 - Vec2;
    CHECK(Vec3.x == -4);
    CHECK(Vec3.y == -4);
    CHECK(Vec3.z == -7);
}

TEST_CASE("testing Vec3 -- complex subtraction") {
    Vec3<double> Vec1(4.89, 7.283, 2.9);
    Vec3<double> Vec2(1.123, 2.9, 5.662);
    Vec3<double> Vec3;

    Vec3 = Vec1 - Vec2;

    double diffX = Vec3.x - 3.767;
    double diffY = Vec3.y - 4.383;
    double diffZ = Vec3.z - -2.762;

    CHECK(std::abs(diffX) <= 0.01);
    CHECK(std::abs(diffY) <= 0.01);
    CHECK(std::abs(diffZ) <= 0.01);
}
