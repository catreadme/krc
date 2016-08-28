/*
 * Shows basic pointer behavior.
 */
#include <stdio.h>
#define evalp(EXPR) printf(#EXPR " = %p\n", EXPR)
#define evali(EXPR) printf(#EXPR " = %d\n", EXPR)

int main() {
  int x, y, z[10];
  int *ip;

  x = 1;
  y = 2;

  ip = &x; evalp(ip);
  y = *ip; evali(y);
  *ip = 0; evali(*ip);
  ip = &z[0]; evalp(ip);
  *ip = 42; evali(*ip);
}
