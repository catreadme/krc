/*
 * Provides squeeze() which removes every character from a string that is
 * within a second string
 */
#include <stdio.h>
#define YES 1
#define NO 0

void squeeze(char s[], char rem[]) {
  int i, j, k, insert;
  j = 0;

  for(i = 0; s[i] != '\0'; ++i) {
    insert = YES;
    for(k = 0; rem[k] != '\0'; ++k) {
      if(s[i] == rem[k]) {
        insert = NO;
      }
    }
    if (insert == YES) {
      s[j] = s[i];
      ++j;
    }
  }

  s[j] = '\0';
}

int main() {
  char s1[] = "We're even wrong about which mistakes we're making";
  char rem[] = "aeiou";
  squeeze(s1, rem);
  printf("%s\n", s1);
}
