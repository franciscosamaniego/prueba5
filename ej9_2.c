#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a > b && b > c) {
    printf("%d\n", a);
  } else if (b > a && a > c) {
    printf("%d\n", b);
  } else {
    printf("%d\n", c);
  }
  return 0;
}
