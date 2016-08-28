/*
 * Counts to 3.
 */
#include <stdio.h>

void count(void) {
  static int i = 0;
  ++i;
  printf("%d\n", i);
}

int main() {
  count();
  count();
  count();
}
