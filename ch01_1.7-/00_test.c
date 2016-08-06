#include <stdio.h>

void b(char s[]) {
  s[0] = 'B';
}

int main() {
  char word[2];

  word[0] = 'A';
  word[1] = '\0';

  printf("%s\n", word);
  b(word);
  printf("%s\n", word);
}
