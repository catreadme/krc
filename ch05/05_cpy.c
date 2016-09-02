/*
 * Provides ascpy() and scpy() to copy a string.
 */

#include <stdio.h>

void ascpy(char *s, char *t) {
  int i = 0;

  while((s[i] = t[i]) != '\0')
    ++i;
}

void scpy(char *s, char *t) {
  while((*s++ = *t++))
    ;
}

int main() {
  char a[13];
  char b[9];

  ascpy(a, "Luftmatratze");
  scpy(b, "Bierfass");

  printf("%s\n", a);
  printf("%s\n", b);
}
