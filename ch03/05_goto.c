/*
 * Goto Collatz
 */
#include <stdio.h>

int main() {
    unsigned long long n, i;
    n = 61264;
    i = 0;
    printf("%llu\n", n);

    start:
    ++i;

    if(n == 1) {
      goto finish;
    }
    if(n % 2 == 0) {
        n = n / 2;
        goto print;
    }
    else {
       n = n * 3 + 1;
       goto print;
    }

    print:

    printf("%llu\n", n);
    goto start;

    finish:

    printf("Reached 1 in %llu steps\n", i);

}
