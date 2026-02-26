#include <stdio.h>
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
  *totDigits = 0;
  *totVowels = 0;
  int len = strlen(str);  // O(n)
  // len(str) <- in Python/C++, is O(1)
  // str.length()
  for (int i = 0; i < len; ++i) {
    if (strchr("aeiouAEIOU", str[i])) {
      (*totVowels)++;
    } else if ('0' <= str[i] && str[i] <= '9') {
      (*totDigits)++;
    }
  }
}
