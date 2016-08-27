/*
 * Provides escape() and unescape which convert invisible chars like \n and \t
 * to visible ones or the opposite while copying a string.
 */
#include <stdio.h>

void escape(char s[], char t[]) {
  int i, j;
  i = j = 0;

  while(t[i] != '\0') {
    switch(t[i]) {
      case '\n':
        s[j] = '\\';
        s[++j] = 'n';
        break;
      case '\t':
        s[j] = '\\';
        s[++j] = 't';
        break;
      default:
        s[j] = t[i];
        break;
    }
    ++i;
    ++j;
  }
  s[j] = '\0';
}

void unescape(char s[], char t[]) {
  int i, j;
  i = j = 0;

  while(t[i] != '\0') {
    switch (t[i]) {
      case '\\':
        if(t[i + 1] == 'n') {
          s[j] = '\n';
          ++i;
        } else if (t[i + 1] == 't') {
          s[j] = '\t';
          ++i;
        }
        break;
      default:
        s[j] = t[i];
        break;
    }
    ++i;
    ++j;
  }
  s[j] = '\0';
}

int main() {
  char in1[] = "This is a\nsimple text\tfor testing.";
  char in2[] = "This is a\\nsimple text\\tfor testing.";
  char out1[30];
  char out2[30];

  printf("Escape:\n");
  escape(out1, in1);
  printf("%s\n", out1);
  printf("\n");

  printf("Unescape:\n");
  unescape(out2, in2);
  printf("%s\n", out2);
  printf("\n");
}
