/*
 * Counts number of lines, words and characters in input
 */
#include <stdio.h>

#define IN 1
#define OUT 0

int main() {
  int c, nl, nw, nc, state;
  int counted_first_line;

  state = OUT;
  nl = nw = nc = 0;
  counted_first_line = 0;

  while ((c = getchar()) != EOF) {
    ++nc;

    // Count first line even if it has no newline character at the end
    if (counted_first_line == 0) {
      counted_first_line = 1;
      ++nl;
    }

    if (c == '\n') {
      ++nl;
    }

    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      ++nw;
    }
  }
  printf("\nlines:%d\nwords:%d\nchars:%d\n", nl, nw, nc);
}
