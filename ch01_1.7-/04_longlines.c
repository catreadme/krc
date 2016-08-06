/*
 * Prints lines from input longer than 80 characters
 */

#include <stdio.h>
#define MAXLINE 1000
#define MIN 80

int count_s(char s[]) {
  int i;
  i = 0;
  while(s[i] != '\0') {
    ++i;
  }
  return i;
}

int getl(char line[]) {
  int i, c;
  i = 0;
  while((c = getchar()) != '\n') {
    if(c == EOF) {
      return -1;
    }
    line[i] = c;
    ++i;
  }
  line[i] = '\0';

  return 0;
}

int main() {
  char line[MAXLINE];

  while(getl(line) != -1) {
    if(count_s(line) > MIN) {
      printf("%s\n", line);
    }
  }

  return 0;
}
