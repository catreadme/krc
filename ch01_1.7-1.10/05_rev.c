/*
 * Reverses input line by line
 */
#include <stdio.h>
#define MAXLINE 1000

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

int count_s(char s[]) {
  int i;
  i = 0;
  while(s[i] != '\0') {
    ++i;
  }
  return i;
}

void reverse(char line[]) {
  int len;
  len = count_s(line);

  for(int i = len; i >= 0; --i) {
    printf("%c", line[i]);
  }
  putchar('\n');
}

int main() {
  char line[MAXLINE];

  while(getl(line) != -1) {
    reverse(line);
  }

  return 0;
}
