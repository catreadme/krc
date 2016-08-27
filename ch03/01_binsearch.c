
/*
 * Provides binsearch() which returns the position of a number in an array
 * of numbers or -1.
 */
#include <stdio.h>

int binsearch(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  while(low <= high) {
    mid = (low + high) / 2;
    if(x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }

  return -1;
}

int main() {
  int nums[] = {1,5,13,51,128,916,1051};

  int exists51 = binsearch(51, nums, 7);
  int exists62 = binsearch(62, nums, 7);

  printf("51 is at position: %d\n", exists51);
  printf("62 is at position: %d\n", exists62);
}
