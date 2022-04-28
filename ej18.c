#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int x = atoi(argv[1]);
  int y = atoi(argv[2]);
  if (x > 0 && y > 0) {
    printf("I\n");
  } else if (x < 0 && y > 0) {
    printf("II\n");
  } else if (x < 0 && y < 0) {
    printf("III\n");
  } else {
    printf("IV\n");
  }
  return 0;
}
