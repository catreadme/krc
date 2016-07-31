/*
 * Prints it's input one word per line
 */
#include <stdio.h>

int main() {
  int c, blanks;
  blanks = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      ++blanks;
      if (blanks <= 1) {
        putchar('\n');
      }
    } else {
      putchar(c);
      blanks = 0;
    }
  }
}
