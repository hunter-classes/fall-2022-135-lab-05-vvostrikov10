#include <iostream>
#include "funcs.h"
#include <cmath>

// add functions here
bool isDivisibleBy(int n, int d){
    return n%d == 0;
}

bool isPrime(int n){
    int upper = sqrt(n);
    int c = 2;
    while (c <= upper){
        if (isDivisibleBy(n, c)){
            return false;
        }
        c++;
    }
    return true;
}

int nextPrime(int n){
    int candidate = n + 1;
    while (!(isPrime(candidate))){
        candidate++;
    }
    return candidate;
}

int countPrimes(int a, int b){
    int c = 0;
    while (a <= b){
        if (isPrime(a)) c++;
        a++;
    }
    return c;
}


