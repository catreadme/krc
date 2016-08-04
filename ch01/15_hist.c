/*
 * Prints a histogram with horizontal bars corresponding to the length of each
 * word in the input
 */
#include <stdio.h>
#define BUFFERSIZE 100

int main() {

  int charcount, offset, c;
  int buffer[BUFFERSIZE];
  for (int i = 0; i < BUFFERSIZE; i++) {
    buffer[i] = -1;
  }
  charcount = offset = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      // TODO buffer overflow
      buffer[offset] = charcount;
      ++offset;
      charcount = 0;
    } else {
      ++charcount;
    }
  }

  for (int i = 0; i < BUFFERSIZE; i++) {
    if (buffer[i] != -1) {
      for (int j = 0; j < buffer[i]; j++) {
        printf("|");
      }
      printf("\n");
    }
  }
}
