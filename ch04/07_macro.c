/*
 * Shows two possible uses of macros.
 */
#include <stdio.h>

#define max(A, B) ((A) > (B) ? (A) : (B))
#define eval(EXPR) printf(#EXPR " = %g\n", EXPR)


int main() {
    printf("%d\n", max(5, 6));
    eval(6.0 / 12.0);
}
