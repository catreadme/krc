/*
 * Provides htoi() which takes a hexadecimal string as input (with optional
 * leading 0x or 0X) and returns it's decimal value
 *
 * Compiled with: gcc -Wall -g -o bin/01_htoi 01_htoi.C -lm
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

unsigned long htoi(const char hex[]) {
  int len = strlen(hex);
  int i, offset, nval, k;
  unsigned long res;

  res = 0;

  if(tolower(hex[0]) == '0' && tolower(hex[1]) == 'x') {
    offset = 2; // skip 0x or 0X prefix
  } else {
    offset = 0;
  }

  k = 0; // used as exponent to base 16
  for(i = len - 1; i >= offset; --i) {
    if(tolower(hex[i]) >= '0' && tolower(hex[i]) <= '9') {
      nval = hex[i] - '0';
    }
    if(tolower(hex[i]) >= 'a' && tolower(hex[i]) <= 'f') {
      nval = tolower(hex[i]) - 'a' + 10; // not sure if this works with all character encodings
    }
    res += nval * pow(16,k);
    ++k;
  }
  return res;
}

int main() {
  printf("0xf = %lu\n", htoi("0xf"));
  printf("0X1Fa = %lu\n", htoi("0X1Fa"));
  printf("0x56c = %lu\n", htoi("0x56c"));
  printf("b = %lu\n", htoi("b"));
  printf("aBcDeF = %lu\n", htoi("aBcDeF"));
}
