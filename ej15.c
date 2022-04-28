#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int maximo_comun_divisor(int a, int b) {
     a = atoi(argv[1]);
     b = atoi(argv[2]);
      int temporal;//Para no perder b
      while (b != 0) {
          temporal = b;
          b = a % b;
          a = temporal;
      }
      return a;
      printf("%f\n", maximo_comun_divisor);
  }
  return 0;
}
