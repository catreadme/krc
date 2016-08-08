#include <stdio.h>

/*
 * 2^16 = 65536
 * signed short = -32768
 *                 32767
 */

/*
 * 11111111 11110011 (-13)
 *         &
 * 00000000 00000001 (1)
 *         =
 * 00000000 00000001 (1) (uneven)
 *
 *
 * 00000000 00111000(56)
 *         &
 * 00000000 00000001 (1)
 *         =
 * 00000000 00000000 (0) (even)
 */
signed short is_even(signed short x) {
  if((x & 1) == 0) {
    return 1;
  } else {
    return 0;
  }
}

/*
 * 00000000 00000001 (1)
 *         &
 * 00000000 00000001 (1 << 0)
 *         =
 * 00000000 00000001 (1) (set)
 *
 *
 * 11111111 11110111 (-9)
 *         &
 * 00000000 00001000 (1 << 3)
 *         =
 * 00000000 00000000 (0) (not set)
 */
signed short is_nth_bit_set(signed short x, signed short n) {
  if((x & (1 << n)) != 0) {
    return 1;
  } else {
    return 0;
  }
}

/*
 * 00000000 00100011 (35)
 *         |
 * 00000000 00010000 (1 << 4)
 *         =
 * 00000000 00110011 (51)
 *
 *
 * 00000000 00001100 (12)
 *         |
 * 10000000 00000000 (1 << 15)
 *         =
 * 10000000 00001100 (-32756)
 */
signed short turn_nth_bit_on(signed short x, signed short n) {
  return x | (1 << n);
}

/*
 * 00000000 00100011 (35)
 *         &
 * 11111111 11111110 ~(1 << 0)
 *         =
 * 00000000 00100010 (34)
 *
 *
 * 11111111 11000011 (-61)
 *         &
 * 01111111 11111111 ~(1 << 15)
 *         =
 * 01111111 11000011 (32707)
 */
signed short turn_nth_bit_off(signed short x, signed short n) {
  return x & ~(1 << n);
}

/*
 * 00000000 00001100 (12)
 *         ^
 * 00000000 01000000 (1 << 6)
 *         =
 * 00000000 01001100 (76)
 *
 *
 * 00000000 00000000 (0)
 *         ^
 * 10000000 00000000 (1 << 15)
 *         =
 * 10000000 00000000 (-32768)
 */
signed short toggle_nth_bit(signed short x, signed short n) {
  return x ^ (1 << n);
}


int main() {
  // is_even
  printf("is even  56: %d\n", is_even(56));
  printf("is even -13: %d\n", is_even(-13));
  printf("is even -12: %d\n", is_even(-12));
  printf("\n");

  // is_nth_bit_set
  printf("is bit 0 of  1 set: %d\n", is_nth_bit_set(1, 0));
  printf("is bit 3 of -9 set: %d\n", is_nth_bit_set(-9, 3));
  printf("is bit 2 of  4 set: %d\n", is_nth_bit_set(4, 2));
  printf("\n");

  // turn_nth_bit_on
  printf("turn on bit  1 of  0 : %d\n", turn_nth_bit_on(0, 1));
  printf("turn on bit  4 of 35 : %d\n", turn_nth_bit_on(35, 4));
  printf("turn on bit 15 of 12 : %d\n", turn_nth_bit_on(12, 15));
  printf("\n");

  // turn_nth_bit_off
  printf("turn off bit  2 of   0: %d\n", turn_nth_bit_off(0, 2));
  printf("turn off bit  0 of  35: %d\n", turn_nth_bit_off(35, 0));
  printf("turn off bit 15 of -61: %d\n", turn_nth_bit_off(-61, 15));
  printf("\n");

  // toggle_nth_bit
  printf("toggle bit  6 of 12: %d\n", toggle_nth_bit(12, 6));
  printf("toggle bit 15 of  0: %d\n", toggle_nth_bit(0, 15));
  printf("toggle bit  5 of 30: %d\n", toggle_nth_bit(30, 5));
  printf("\n");
}
