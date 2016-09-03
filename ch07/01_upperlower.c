/*
 * Converts stdin to upper or lower stdout.
 */
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("error: wrong number of arguments\n");
    return -1;
  }

  int c;

  if((strcmp(argv[1], "upper")) == 0) {
    while((c = getchar()) != EOF)
      putchar(toupper(c));
  } else if((strcmp(argv[1], "lower")) == 0) {
    while((c = getchar()) != EOF)
      putchar(tolower(c));
  } else {
    printf("error: unknown argument \"%s\"\n", argv[1]);
    return -1;
  }
  return 0;
}
