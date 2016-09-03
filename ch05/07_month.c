/*
 * Provides month_name() to get the month name from an int.
 */
#include <stdio.h>

char *month_name(int n) {
  static char *name[] = {
    "Illegal month",
    "January", "February", "March",
    "Apriil", "May", "June", "July",
    "August", "September", "October",
    "November", "December"
  };

  return (n < 1 || n > 12) ? name[0] : name[n];
}

int main() {
  char *month = month_name(5);
  printf("%s\n", month);
}
