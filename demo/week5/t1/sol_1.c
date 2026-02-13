#include <stdio.h>
#include <string.h>

void processString(char* str, int* totVowels, int* totDigits);

int main() {
  char str[50], *p;
  int totVowels, totDigits;
  printf("Enter the string: \n");
  fgets(str, 50, stdin);
  if (p = strchr(str, '\n')) {
    *p = '\0';
  }
  processString(str, &totVowels, &totDigits);
  printf("Total vowels = %d\n", totVowels);
  printf("Total digits = %d\n", totDigits);
  return 0;
}

void processString(char* str, int* totVowels, int* totDigits) {
  int length = strlen(str);
  *totVowels = 0;
  *totDigits = 0;
  for (int i = 0; i < length; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      (*totVowels)++;
    } else if ('0' <= str[i] && str[i] <= '9') {
      (*totDigits)++;
    }
  }
}
