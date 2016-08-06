/*
 * Shows the pass by reference behaviour for arrays
 * Visualization with pythontutor
 * http://pythontutor.com/visualize.html#code=%23include%20%3Cstdio.h%3E%0A%0Avoid%20b(char%20s%5B%5D%29%20%7B%0A%20%20s%5B0%5D%20%3D%20'B'%3B%0A%7D%0A%0Aint%20main(%29%20%7B%0A%20%20char%20word%5B2%5D%3B%0A%0A%20%20word%5B0%5D%20%3D%20'A'%3B%0A%20%20word%5B1%5D%20%3D%20'%5C0'%3B%0A%0A%20%20printf(%22%25s%5Cn%22,%20word%29%3B%0A%20%20b(word%29%3B%0A%20%20printf(%22%25s%5Cn%22,%20word%29%3B%0A%7D%0A&cumulative=false&curInstr=0&heapPrimitives=false&mode=display&origin=opt-frontend.js&py=c&rawInputLstJSON=%5B%5D&textReferences=false
 */
#include <stdio.h>

void b(char s[]) {
  s[0] = 'B';
}

int main() {
  char word[2];

  word[0] = 'A';
  word[1] = '\0';

  printf("%s\n", word);
  b(word);
  printf("%s\n", word);
}
