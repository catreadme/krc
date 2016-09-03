/*
 * Provides map() to map over functions that manipulate strings.
 * Leaky.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *force(char *s) {
  char *n =  malloc((strlen(s) + 2) * sizeof(char));
  return strcat(strcpy(n, s), "!");
}

char *shout(char *s) {
  char *n =  malloc((strlen(s) + 1) * sizeof(char));
  for(int i = 0; (n[i] = toupper(s[i])); ++i)
    ;
  return n;
}

void map(char* (*func)(char *), char *words[]) {
  int i;
  for(i = 0; strcmp(words[i], "") != 0; ++i) {
    printf("%s\n", (*func)(words[i]));
  }
}

int main() {
  char *words[] = {"Kugelblitz", "Regenbogen", "Rucksack", ""};

  map(&force, words);
  printf("\n");
  map(&shout, words);

  return 0;
}
