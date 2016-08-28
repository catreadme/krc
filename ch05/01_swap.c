/*
 * Provides swap() for swapping to variables.
 */
#include <stdio.h>
#define evali(EXPR) printf(#EXPR " = %d\n", EXPR)

void swap(int *a, int *b) {
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int height = 65;
  int weight = 170;

  swap(&height, &weight);

  evali(height);
  evali(weight);
}
