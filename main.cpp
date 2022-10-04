#include <iostream>


#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(49, 7) << std::endl;
  std::cout << isPrime(43) << std::endl;
  std::cout << nextPrime(17) << std::endl;
  std::cout << countPrimes(17, 50) << std::endl;
  return 0;
}
