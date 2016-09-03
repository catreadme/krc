/*
 * Provides a basic linked list to demonstrate recursive structs.
 * Leaky.
 */
#include <stdio.h>
#include <stdlib.h>

struct ll {
  int val;
  struct ll *next;
};

struct ll *initlist(int x) {
  struct ll *tmp = malloc(sizeof(struct ll));
  tmp->val = x;
  return tmp;
}

void append(int x, struct ll *l) {
  if(l->next) {
    append(x, l->next);
  } else {
    struct ll *tmp = malloc(sizeof(struct ll));
    l->next = tmp;
    tmp->val = x;
  }
}

void printlist(struct ll *l) {
  printf("%d\n", l->val);
  if(l->next) {
    printlist(l->next);
  }
}

int main() {
  struct ll *sizes = initlist(10);
  append(56, sizes);
  append(16, sizes);
  printlist(sizes);
}
