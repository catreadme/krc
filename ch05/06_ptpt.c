/*
 * Shows the way pointer arrays work.
 */
#include <stdio.h>
#define evalp(EXPR) printf(#EXPR " = %p\n", EXPR)

int main() {
  char *lines[3];

  char *word = "Kanonenkugel";
  char *name = "John";
  char *season = "Summer";

  *lines = word;
  *(lines + 1) = name;
  *(lines + 2) = season;

  char c;
  for(int i = 0; i < 3; ++i) {
    while((c = *(*(lines + i))++) != '\0') {
      printf("%c", c);
    }
    printf("\n");
  }
}
