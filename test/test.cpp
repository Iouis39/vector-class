#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"

#include "vector.hpp"

TEST_CASE("tests if normalized vector has length of 1") {
    Vec3<double> Vec(1, 3, 4);

    Vec3<double> unitVec = Vec.normalize();
    CHECK(unitVec.length() == 1);
}

//TEST_CASE("tests if ")
