#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  long big = 600851475143;
  long bigPrime = 2;
  while (bigPrime*bigPrime <= big) {
    if (big % bigPrime == 0) {
      big /= bigPrime;
    }
    else {
      bigPrime++;
    }
  }
  printf("the largest prime factor is %ld\n", big);
  return big;
}
