#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int suma = 0;
  for (int i = 0; i < argc; i++) {
    int n = atoi(argv[i]);
    if (suma < n) {
      suma = n;
    }
  }
  printf("Max: %d\n", suma);
  return 0;
}
