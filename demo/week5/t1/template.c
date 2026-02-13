#include <stdio.h>
#include <ctype.h>
#include <string.h>

void processString(char* str, int* totVowels, int* totDigits);

int main() {
  char str[50], *p;
  int totVowels, totDigits;
  printf("Enter the string: \n");
  fgets(str, 50, stdin);
  if (p = strchr(str, '\n')) *p = '\0';
  processString(str, &totVowels, &totDigits);
  printf("Total vowels = %d\n", totVowels);
  printf("Total digits = %d\n", totDigits);
  return 0;
}

void processString(char* str, int* totVowels, int* totDigits) {
  *totVowels = 0;
  *totDigits = 0;
  int len = strlen(str); // O(n)
  for (int i = 0; i < len; ++i) {
    if (strchr("aeiouAEIOU", str[i])) {
      (*totVowels)++;
    } else if (isdigit(str[i])) {
      (*totDigits)++;
    }
  }
}
