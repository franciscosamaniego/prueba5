#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  if (a == b || b == c) {
    printf("Son iguales\n");
  } else {
    printf("No son iguales\n");
  }
  return 0;
}
