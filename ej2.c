#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int c = atoi(argv[3]);
  int raiz = sqrt(b * b -4 * a * c);
  if (a == 0) {
    printf("No tiene raices\n");
  } else {
    if (raiz < 0) {
      printf("Error\n");
    } else if (raiz == 0){
      printf("%d\n", (-b + raiz) / (2 * a));
    } else {
      printf("%.d\n", (-b + raiz) / (2 * a));
      printf("%.d\n", (-b - raiz) / (2 * a));
    }
  }
  return 0;
}
