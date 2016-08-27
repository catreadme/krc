/*
 * Provides shellsort() for sorting an array of integers with the Shell
 * algorithm.
 */
#include <stdio.h>

void shellsort(int v[], int n) {
  int gap, i, j, temp;

  for(gap = n/2; gap > 0; gap /= 2) {
    for(i = gap; i < n; ++i) {
      for(j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
        temp = v[j];
        v[j] = v[j + gap];
        v[j + gap] = temp;
      }
    }
  }

}

int main() {
  int i, len;
  int list[] = {6,2,3,4,1,9,7,5};
  len = 8;

  shellsort(list, len);

  for(i = 0; i < len; ++i) {
    printf("%d ", list[i]);
  }
  printf("\n");
}
