/*
 * Prints it's input characterwise
 */
#include <stdio.h>

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
  }
}
