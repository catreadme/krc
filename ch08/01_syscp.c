/*
 * Listens for stdin and writes to stdout using read and write syscalls.
 *
 * File descriptors:
 *   0 = stdin
 *   1 = stdout
 *   2 = stderr
 */

#include <unistd.h>
#include <stdio.h>

int main() {
  char buf[BUFSIZ];
  int n;

  while((n = read(0, buf, BUFSIZ)) > 0)
    write(1, buf, n);
  return 0;
}
