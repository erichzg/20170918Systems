#include <stdio.h>
#include <stdlib.h>
int main() {
  int sum = 0;
  int i;
  for(i = 3; i < 1000; i += 1) {
    if (i % 3 == 0) {
      sum += i;
    }
    else if (i % 5 == 0) {
      sum += i;
    }
  }
  printf("the sum is %d\n", sum);
  return sum;
}
