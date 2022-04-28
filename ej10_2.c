#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  double suma = 0.0;
  int max = INT_MIN;
  int min = INT_MAX;
  for (int i = 1; i < argc; i++) {
    int n = atoi(argv[i]);
    if (max < n) {
      max = n;
    }
    if (min > n) {
      min = n;
    }
    suma += n;
  }
  printf("Promedio: %.2f\n", suma / (argc - 1));
  printf("Max: %d\n", max);
  printf("Min: %d\n", min);
  return 0;
}
