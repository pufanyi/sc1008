#include <stdio.h>

int main() {
  char password[] = "password";
  char input[10];
  if (!fgets(input, sizeof(input), stdin)) {
    return 1;
  }
  printf("input: %s\n", input);
  printf("password: %s\n", password);
  return 0;
}
