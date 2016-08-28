/*
 * Provides a recursive reverse() function.
 */

#include <stdio.h>

void recrev(char s[], int first, int last) {
  if(last <= (first + last) / 2) {
    return;
  }

  char c = s[first];

  s[first] = s[last];
  s[last] = c;

  recrev(s, ++first, --last);
}

int main() {
  char word[] = "Luftschiffsitzplatz";

  recrev(word, 0, 18);
  printf("%s\n", word);
  recrev(word, 0, 18);
  printf("%s\n", word);
}
