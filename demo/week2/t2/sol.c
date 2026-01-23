#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Enter your characters (# to end):\n");
    char c;
    int num_digits = 0;
    int num_letters = 0;
    while (1) {
        c = getchar();
        if (c == '#') {
            break;
        }
        if (isdigit(c)) {
            num_digits++;
        } else if (isalpha(c)) {
            num_letters++;
        }
    }
    printf("The number of digits: %d\n", num_digits);
    printf("The number of letters: %d\n", num_letters);
    return 0;
}