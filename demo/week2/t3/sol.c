#include <stdio.h>

int main() {
    printf("Enter the height:\n");
    int height;
    scanf("%d", &height);
    printf("Pattern:\n");
    for (int i = 0; i < height; ++i) {
        int number_to_print = i % 3 + 1;
        for (int j = 0; j < i + 1; ++j) {
            printf("%d", number_to_print);
        }
        printf("\n");
    }
    return 0;
}