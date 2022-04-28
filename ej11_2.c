#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  double tang = atan2(y,x);
  if (x >= 0 && y >= 0) {
    printf("%.2f\n", tang * 180 / M_PI);
  } else if (x <= 0 && y <= 0) {
    printf("%.2f\n", tang * 180 / M_PI);
  } else if ((x <= 0 && y >= 0) || (x >= 0 && y <= 0)) {
    printf("%.2f\n", tang * 180 / M_PI);
  }
  return 0;
}
