#include <iostream>


#include "funcs.h"

int main()
{
  std::string ans = isDivisibleBy(49, 7) ? "is " : "is not ";
  std::cout << "49 " << ans << "divisible by 7"  << std::endl;
  ans = isPrime(43) ? "is " : "is not ";
  std::cout << "43 " << ans << "a prime" << std::endl;
  std::cout << "The next prime after 17 is " << nextPrime(17) << std::endl;
  std::cout << "There are " << countPrimes(17,50) << " primes between 17 and 50" << std::endl;
  ans = isPrime(43) ? "is " : "is not ";
  std::cout << "17 " << ans << "a twin prime" << std::endl;
  std::cout << "The next twin prime after 15 is " << nextPrime(15) << std::endl;
  std::cout << "The largest twin prime between 0 and 500 is " << largestTwinPrime(0,500) << std::endl;
  return 0;
}
