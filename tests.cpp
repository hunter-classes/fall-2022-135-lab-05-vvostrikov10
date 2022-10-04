#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("<isDivisibleBy tests>"){
    CHECK(isDivisibleBy(49, 7) == true);
    CHECK(isDivisibleBy(49, 6) == false);
    CHECK(isDivisibleBy(23, 1) == true);
    CHECK(isDivisibleBy(36, 6) == true);
    CHECK(isDivisibleBy(52, 13) == true);
}
