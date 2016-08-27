/*
 * Provides rev() for reversing a string.
 */
#include <stdio.h>
#include <string.h>

void rev(char s[]) {
  int i, last, c;
  last = strlen(s) - 1;

  for(i = 0; i <= last; ++i) {
    c = s[i];
    s[i] = s[last];
    s[last] = c;
    --last;
  }
}

int main() {
  char word[] = "Raketenwissenschaftler";
  rev(word);
  printf("%s\n", word);
  rev(word);
  printf("%s\n", word);
}
