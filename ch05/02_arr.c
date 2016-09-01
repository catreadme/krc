/*
 * Shows the relations between arrays and pointers.
 */
#include <stdio.h>
#define evali(EXPR) printf(#EXPR " = %d\n", EXPR)
#define evalp(EXPR) printf(#EXPR " = %p\n", EXPR)

int main() {
  int a[10];
  int *pa, *pb, *pc;
  int x;

  a[0] = 25;
  a[5] = 13;
  a[7] = 11;

  pa = &a[0];

  x = *pa;
  evali(x);

  x = *(pa + 5);
  evali(x);

  pb = &a[9];
  evali(*(pb - 2));

  pc = a;
  evali(*pc);
  evalp(pc);
  evalp(a);

  evali(*(a + 7));
  evali(pc[7]);
}
