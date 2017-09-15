#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 1;
  int b = 2;
  int c;
  int sum = 0;
  while (b < 4000000) {
    if (b % 2 == 0) {
      sum += b;
    }
    c = b;
    b += a;
    a = c;
  }
  printf("the sum is %d\n", sum);
  return sum;
}
