/*
 * Prints useful information for commonly used types
 */
#include <limits.h>
#include <stdio.h>
#include <float.h>

int main() {
  // char
  printf("char\n");
  printf("\tchar bits: %d\n", CHAR_BIT);
  printf("\tchar min: %d\n", CHAR_MIN);
  printf("\tchar max: %d\n", CHAR_MAX);
  printf("\tsigned char min: %d\n", SCHAR_MIN);
  printf("\tsigned char max: %d\n", SCHAR_MAX);
  printf("\tunsigned char min: 0\n");
  printf("\tunsigned char max: %d\n", UCHAR_MAX);
  printf("\tmax multibyte length of a character accross locales: %d\n", MB_LEN_MAX);

  // short
  printf("short\n");
  printf("\tshort min: %d\n", SHRT_MIN);
  printf("\tshort max: %d\n", SHRT_MAX);
  printf("\tunsigned short min: 0\n");
  printf("\tunsigned short max: %d\n", USHRT_MAX);

  // int
  printf("int\n");
  printf("\tint min: %d\n", INT_MIN);
  printf("\tint max: %d\n", INT_MAX);
  printf("\tunsigned int min: 0\n");
  printf("\tunsigned int max: %u\n", UINT_MAX);

  // long
  printf("long\n");
  printf("\tlong min: %ld\n", LONG_MIN);
  printf("\tlong max: %ld\n", LONG_MAX);
  printf("\tunsigned long min: 0\n");
  printf("\tunsigned long max: %lu\n", ULONG_MAX);
  printf("\tlong long min: %lld\n", LLONG_MIN);
  printf("\tlong long max: %lld\n", LLONG_MAX);
  printf("\tunsigned long long min: 0\n");
  printf("\tunsigned long long max: %llu\n", ULLONG_MAX);

  // float
  printf("float\n");
  printf("\tfloat min: %f\n", -FLT_MAX);
  printf("\tfloat max: %f\n", FLT_MAX);

  // double
  printf("double\n");
  printf("\tdouble min: %f\n", -DBL_MAX);
  printf("\tdouble max: %f\n", DBL_MAX);
  printf("\tlong double min: %Lf\n", -LDBL_MAX);
  printf("\tlong double max: %Lf\n", LDBL_MAX);
}
