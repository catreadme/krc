/*
 * Converts Fahrenheit to Celsius
 *
 * Tc = 5/9 * (Tf - 32)
 */
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr;
  printf("Fahrenheit to Celsius\n\n");

  for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  }
}
