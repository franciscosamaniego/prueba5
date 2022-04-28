#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int i = rand() % 100 + 1;
  int d = n / i;
  if (n % i == 3) {
    printf("%d\n", d);
    }
  return 0;
}
