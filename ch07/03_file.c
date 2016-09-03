/*
 * Works like the cat util.
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i, c;
  FILE *fp;

  for(i = 1; i < argc; ++i) {
    if((fp = fopen(argv[i], "r")) != NULL) {
      while((c = getc(fp)) != EOF) {
        putchar(c);
      }
    } else {
      fprintf(stderr, "%s: cannot open file %s\n", argv[0], argv[i]);
      exit(2);
    }
  }
  exit(0);
}
