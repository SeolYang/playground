#include "constness.h"
#include "catch.hpp"

TEST_CASE("Const-ness", "[break_const-ness]")
{
    sy::constness::AwesomeClass object;
    REQUIRE(object.Value() == 0);
    object.BreakConstness();
    REQUIRE(object.Value() == 1);
}