/*
 * Provides a simple qsort() implementation.
 */
#include <stdio.h>

void swap(int v[], int i, int j) {
  int temp;

  temp = v[i];
  v[i] = v[j];
  v[j] = temp;
}

void qsort(int v[], int left, int right) {
  int i, last;

  if(left >= right)
    return;

  swap(v, left, (left + right) / 2);

  last = left;
  for(i = left + 1; i <= right; ++i) {
    if(v[i] < v[left])
      swap(v, ++last, i);
  }

  swap(v, left, last);
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}

int main() {
  int numbers[] = {6,1,3,51,32,91,2,4,26,14};
  int i;

  qsort(numbers, 0, 9);
  for(i = 0; i < 10; ++i) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
}
