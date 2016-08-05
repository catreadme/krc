/*
 * Prints a histogram with horizontal bars corresponding to the frequency of
 * the characters in the input
 */
#include <stdio.h>
#define CHARSETIZE 1000

int main() {
  int c;
  int chars[CHARSETIZE];
  for (int i = 0; i < CHARSETIZE; i++) {
    chars[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    // TODO check for too big array index
    ++chars[c];
  }

  for (int i = 0; i < CHARSETIZE; i++) {
    if (chars[i] != 0) {
      if (i == 9) {
        printf(" \\t: ", i);
      } else if (i == 10) {
        printf(" \\n: ", i);
      } else if (i == 32) {
        printf("' ': ", i);
      } else {
        printf("%3c: ", i);
      }

      for (chars[i]; chars[i] > 0; --chars[i]) {
        printf("|");
      }
      printf("\n");
    }
  }
}
