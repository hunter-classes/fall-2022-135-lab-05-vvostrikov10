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
    if (n < 2){
        return false;
    }
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

bool isTwinPrime(int n){
    return (isPrime(n))&&(isPrime(n + 2) || isPrime(n-2));
}

int nextTwinPrime(int n){
    do {
        n++;
    } while (!(isTwinPrime(n)));
    return n;
}

int largestTwinPrime(int a, int b){
    int ans = -1;
    while(a <= b){
        if (isTwinPrime(a)){
            ans = a;
        }
        a++;
    }
    return ans;
}


