/*
 * Replaces consecutive blanks with a single blank
 */
#include <stdio.h>

int main() {
  int c, blanks;
  blanks = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      ++blanks;
    } else {
      blanks = 0;
    }

    if (blanks <= 1) {
      putchar(c);
    }
  }
}
