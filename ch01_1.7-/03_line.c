/*
 * Prints the longest line of the input and it's character count.
 */
#include <stdio.h>
#define MAXLINE 1000

int getl(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getl(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }

  if (max > 0) {
    if (max > MAXLINE) {
      printf("Line too long to print\n");
    }
    printf("longest line: %s\n", longest);
    printf("num of chars: %d\n", max);
  }

  return 0;
}

int getl(char s[], int lim) {
  int c, i;

  for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; ++i) {
    s[i] = c;
  }

  // Continue counting if line is longer than MAXLINE
  if(i == (lim - 1)) {
    while((c=getchar()) != '\n') {
      ++i;
    }
  }

  if (c == '\n') {
    s[i] = c;
    ++i;
  }

  s[i] = '\0';

  return i;
}


void copy (char to[], char from[]) {
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0') {
    ++i;
  }
}
