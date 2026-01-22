#include <ctype.h>
#include <stdio.h>

int main() {
  printf("Enter your characters (# to end):\n");
  int num_letters = 0;
  int num_digits = 0;
  while (true) {
    char c = getchar();
    if (c == '#') {
      break;
    } else if (isalpha(c)) {
      num_letters++;
    } else if (isdigit(c)) {
      num_digits++;
    }
  }
  printf("Number of letters: %d\n", num_letters);
  printf("Number of digits: %d\n", num_digits);
  return 0;
}
