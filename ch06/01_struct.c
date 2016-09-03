/*
 * Shows how to work with structs. Provides a point and a rect struct.
 */
#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point pt1;
  struct point pt2;
};

struct rect makerect(int p1x, int p1y, int p2x, int p2y) {
  struct rect tmp;

  tmp.pt1.x = p1x;
  tmp.pt1.y = p1y;
  tmp.pt2.x = p2x;
  tmp.pt2.y = p2y;

  return tmp;
}

struct rect *resetrect(struct rect *r) {
  (*r).pt1.x = 0;
  (*r).pt1.y = 0;
  r->pt2.x = 0;
  r->pt2.y = 0;

  return r;
}

int main() {
  struct point pt = {500, 300};

  printf("x: %d\n", pt.x);
  printf("y: %d\n", pt.y);
  printf("\n");

  struct rect square = makerect(0, 0, 10, 10);

  printf("square pt1: %d/%d\n", square.pt1.x, square.pt1.y);
  printf("square pt2: %d/%d\n", square.pt2.x, square.pt2.y);
  printf("\n");

  resetrect(&square);

  printf("square pt1: %d/%d\n", square.pt1.x, square.pt1.y);
  printf("square pt2: %d/%d\n", square.pt2.x, square.pt2.y);
  printf("\n");
}
