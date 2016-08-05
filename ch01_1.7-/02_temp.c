/*
 * Converts Fahrenheit to Celsius
 *
 * Tc = 5/9 * (Tf - 32)
 */
#include <stdio.h>

float f_to_c(int fahr);

int main() {
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("Fahrenheit to Celsius\n\n");
  while (fahr <= upper) {
    celsius = f_to_c(fahr);
    printf("%3.0f \t %6.1f \n", fahr, celsius);
    fahr = fahr + step;
  }
}

float f_to_c(int fahr) {
  return (5.0/9.0) * (fahr - 32.0);
}
