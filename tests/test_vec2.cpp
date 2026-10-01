#include "../src/math/vec2.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Initialise vec2", "[vector]")
{
    SECTION("allowed types such as int and float")
    {
        learn::vec2<int> iVec{2, 8};
        REQUIRE(iVec.x == 2);
        REQUIRE(iVec.y == 8);

        learn::vec2<float> fVec2{3.0f, 6.5f};
        REQUIRE(fVec2.x == 3.f);
        REQUIRE(fVec2.y == 6.5f);
    }
}

TEST_CASE("vec2 operator adding, subtracting, multiplying scalar",
          "[vector][math]")
{
    SECTION("vector operator adding")
    {
        learn::vec2<int> iVec{2, 8};
        learn::vec2<int> iVec2{8, 3};
        learn::vec2<int> sumVec = iVec + iVec2;
    }
}
