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

TEST_CASE("<isPrime tests>"){
    CHECK(isPrime(1) == false);
    CHECK(isPrime(-5) == false);
    CHECK(isPrime(13) == true);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(169) == false);
    CHECK(isPrime(63) == false);
}

TEST_CASE("<nextPrime tests>"){
    CHECK(nextPrime(-5) == 2);
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(3) == 5);
    CHECK(nextPrime(1000) == 1009);
    CHECK(nextPrime(8) == 11);
    CHECK(nextPrime(97) == 101);
}


TEST_CASE("<countPrimes tests>"){
    CHECK(countPrimes(6, 3) == 0);
    CHECK(countPrimes(3, 6) == 2);
    CHECK(countPrimes(-3, 6) == 3);
    CHECK(countPrimes(5, 5) == 1);
    CHECK(countPrimes(6, 3) == 0);
    CHECK(countPrimes(0,1000) == 168);
}

TEST_CASE("<isTwinPrime tests>"){
    CHECK(isTwinPrime(23) == false);
    CHECK(isTwinPrime(462) == false);
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(19) == true);
    CHECK(isTwinPrime(-17) == false);
    CHECK(isTwinPrime(17) == true);
    CHECK(isTwinPrime(461) == true);
}