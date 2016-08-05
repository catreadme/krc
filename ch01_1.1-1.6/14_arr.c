/*
 * Counts occurences of each digit, whitespace (' ', \t, \n) and all other
 * characters
 *
 * '0' => 48
 * '1' => 49
 * ...
 * '8' => 56
 * '9' => 57
 */
#include <stdio.h>

int main() {
  int c, i, nwhite, nother;
  int ndigit[10];

  nwhite = nother = 0;
  for (i = 0; i < 10; ++i) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0']; // e.g. '5' - '0' == 53 - 48 == 5
    } else if (c == ' ' || c == '\n' || c == '\t') {
      ++nwhite;
    } else {
      ++nother;
    }
  }

  printf("digits =");
  for (i = 0; i < 10; ++i) {
    printf(" %d", ndigit[i]);
  }
  printf(", white space = %d, other = %d\n", nwhite, nother);
}
