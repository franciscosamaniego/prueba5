#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int prom = (a + b + c) / 3;
  if (a > b && a > c) {
    printf("%d\n", a);
  } else if (b > a && b > c) {
    printf("%d\n", b);
  } else {
    printf("%d\n", c);
  }
  if (a < b && a < c) {
    printf("%d\n", a);
  } else if (b < a && b < c) {
    printf("%d\n", b);
  } else {
  printf("%d\n", c);
}
    printf("%d\n", prom);
  return 0;
}
