#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  srand(time(NULL));
  int n = atoi(argv[1]);
  int j = 0;
  for (int i = 1; i <= n; i++) {
  int o = rand() % 101;
    printf("%d\n", o);
    j += o;
  }
  int prom = j / n;
  printf("promedio: %d\n", prom);
  return 0;
}
