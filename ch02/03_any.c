/*
 * Provides any() which returns the position of the first matching character
 * from a string
 */
#include <stdio.h>

int any(char s1[], char s2[]) {
  int i, k;
  for(i = 0; s1[i] != '\0'; ++i) {
    for(k = 0; s2[k] != '\0'; ++k) {
      if(s1[i] == s2[k]) {
        return i;
      }
    }
  }
  return -1;
}

int main() {
  char s1[] = "This is a test";
  char s2[] = "gkiam";
  printf("char nr. %d = %c\n", any(s1, s2) + 1, s1[any(s1, s2)]);
}
