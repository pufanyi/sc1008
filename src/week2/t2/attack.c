/**********************************************************************************
 * Note:
 * This code is vulnerable to buffer overflow attack.
 * scanf("%s", input) will read until it encounters a newline character.
 * If the input is longer than the buffer size, it will overflow the buffer.
 *
 * For example, if the input is "**********mypasswd", the input buffer will be
 * overwritten by "mypasswd".
 *
 * Then the output will be:
 * input: **********mypasswd
 * password: mypasswd
 **********************************************************************************/

#include <stdio.h>

int main() {
  char password[] = "password";
  char input[10];
  scanf("%s", input);
  printf("input: %s\n", input);
  printf("password: %s\n", password);
  return 0;
}

// stack overflow attack
