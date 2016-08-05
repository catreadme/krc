/*
 * Prints a histogram with vertical bars corresponding to the length of each
 * word in the input
 */
#include <stdio.h>
#define BUFFERSIZE 100

int main() {

  // Initialize variables
  int charcount, offset, c;
  int buffer[BUFFERSIZE];
  for (int i = 0; i < BUFFERSIZE; ++i) {
    buffer[i] = -1;
  }
  charcount = offset = 0;

  // Collect input and count lengths of words
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

  // Get the width (cols) and height (rows) of the "bar chart"
  int width, height;
  width = height = 0;
  for (int i = 0; i < BUFFERSIZE; ++i) {
    if (buffer[i] != -1) {
      ++width;
      for (int j = 0; j < buffer[i]; ++j) {
        if (buffer[i] > height) {
          height = buffer[i];
        }
      }
    }
  }

  // Print the "upside down bar chart"
  for (int k = 0; k < height; ++k) {
    for (int i = 0; i < width; ++i) {
      if (buffer[i] > 0) {
        printf("* ");
        --buffer[i];
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}
