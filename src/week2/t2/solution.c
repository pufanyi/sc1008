#include <stdbool.h>
#include <stdio.h>

int main() {
  printf("Enter your characters (# to end):\n");
  int num_letters = 0;
  int num_digits = 0;
  // stdbool.h is introduced in C99
  // https://pubs.opengroup.org/onlinepubs/9799919799/
  // Before C99, we need to use while (1) instead of while (true)
  while (true) {
    char c = getchar();
    if (c == '#') {
      break;
    } else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') {
      // NOTE: Don't use 'a' <= c <= 'z'
      num_letters++;
    } else if (c >= '0' && c <= '9') {
      // NOTE: Don't use '0' <= c <= '9' or 0 <= c <= 9
      num_digits++;
    }
  }
  printf("Number of letters: %d\n", num_letters);
  printf("Number of digits: %d\n", num_digits);
  return 0;
}
