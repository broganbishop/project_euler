#include <stdio.h>

int main() {
  int target = 1000;
  int total = 0;

  for (int i = 0; i < target; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      total += i;
    }
  }

  printf("%i\n", total);

  return 0;
}




