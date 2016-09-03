
/*
 * Naive rpn supporting + and * without error handling.
 * E.g. bin/09_rpc 2 3 4 + \*
 */
#include <stdio.h>
#define STACKSIZE 1000

static int stack[STACKSIZE];
static int *stackpointer = stack;

void push(int c) {
  *stackpointer++ = c;
}

int pop(void) {
  return *--stackpointer;
}

char getop(char c) {
  switch (c) {
    case '+': return '+';
    case '*': return '*';
    default: return '0';
  }
}

int calc(char op, int x, int y) {
  switch (op) {
    case '+': return x + y;
    case '*': return x * y;
    default: return 0;
  }
}

int main(int argc, char *argv[]) {
  char c, op;
  int i;

  while(--argc > 0) {
    c = argv[++i][0];
    if((op = getop(c)) != '0') {
      push(calc(op, pop(), pop()));
    } else {
      push(c - '0');
    }
  }

  printf("%d\n", *stack);
  return 0;
}
