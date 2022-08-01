#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest/doctest.h"

#include "vector.hpp"

TEST_CASE("tests if vector get's normalized correctly") {
    Vec3<int> Vec;
    Vec.x = 3;
    Vec.y = 7;
    Vec.z = 2;

    Vec3<int> unitVec = Vec.normalize();
    CHECK(unitVec.length() == 0);
}
