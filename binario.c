#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int power = 1;
  while (power <= n / 2)
    power *= 2;
  while (power > 0) {
    if (n < power) {
      printf("0");
    } else {
      printf("1");
      n -= power;
    }
    power /= 2;
  }
  printf("\n");
  return 0;
}
