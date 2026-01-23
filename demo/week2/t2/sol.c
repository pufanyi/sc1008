#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter your characters (# to end):\n");
    int num_digits = 0;
    int num_letters = 0;
    char str[100];
    while (1) {
        char c = getchar();
        if (c == '#') {
            break;
        }
        if (isdigit(c)) {
            num_digits++;
        } else if (isalpha(c)) {
            num_letters++;
        }
    }
    printf("Number of digits: %d\n", num_digits);
    printf("Number of letters: %d\n", num_letters);
    return 0;
}