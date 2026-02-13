#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "password";
  char str[6] = "Hello";
  printf("%s\n", str);
  printf("strlen(str) = %lu\n", strlen(str));
  str[1] = '\0';
  printf("%s\n", str);
  printf("strlen(str) = %lu\n", strlen(str));
  str[1] = 'e';
  str[5] = ' ';
  printf("%s\n", str);
  printf("strlen(str) = %lu\n", strlen(str));
  return 0;
}