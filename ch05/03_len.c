/*
 * Provides len() which returns a string's length.
 */
#include <stdio.h>

int len(char *s) {
  int i;
  for(i = 0; *s != '\0'; ++s)
    ++i;
  return i;
}

int main() {
  char word[] = "Kirschenbaum";
  char *name = "Bob";

  printf("%d\n", len(word));
  printf("%d\n", len(name));

}
