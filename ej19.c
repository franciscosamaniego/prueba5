#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = a / b;
  if (a % b == 0) {
    printf("%d\n", c);
  } else {
    printf("No se puede dividir\n");
  }
  return 0;
}
