/*
 * Provides alloc() and afree() to request and free memory.
 */
#include <stdio.h>
#include <string.h>

#define evalp(EXPR) printf(#EXPR " = %p\n", EXPR)
#define ALLOCSIZE 100 // Available space

static char allocbuf[ALLOCSIZE]; // storage for alloc
static char *allocp = allocbuf; // next free position

char *alloc(int n) {
  if(allocbuf + ALLOCSIZE - allocp >= n) { // n fits
    allocp += n;
    return allocp - n;
  } else {
    return 0;
  }
}

void afree(char *p) {
  if(p >= allocbuf && p < allocbuf + ALLOCSIZE) {
    allocp = p;
  }
}

void allocdump(void) {
  printf("Alloc dump:\n");
  for(int i = 0; i < ALLOCSIZE; ++i) {
    if(*(allocbuf + i) == 0) {
      printf("0");
    } else {
      printf("%c", *(allocbuf + i));
    }
  }
  printf("\n\n");
}

int main() {
  evalp(allocbuf);

  char *word = alloc(10);
  char *name = alloc(10);
  char *sentence = alloc(50);
  char *poem = alloc(80);

  evalp(word);
  evalp(name);
  evalp(sentence);
  evalp(poem);
  printf("\n");

  strcpy(word, "car");
  strcpy(name, "eva");
  strcpy(sentence, "Who's there?");

  printf("word: %s\n", word);
  printf("name: %s\n", name);
  printf("sentence: %s\n", sentence);
  printf("\n");

  allocdump();
  afree(name);

  char *newword = alloc(15);
  evalp(newword);
  strcpy(newword, "Kugelschreiber");
  printf("newword: %s\n\n", newword);

  allocdump();
}
