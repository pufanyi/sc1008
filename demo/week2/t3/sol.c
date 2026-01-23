#include <stdio.h>

int main() {
    printf("Enter the height:\n");
    int height;
    scanf("%d", &height);
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            int number_to_print = i % 3 + 1;
            printf("%d", number_to_print);
        }
        printf("\n");
    }
    return 0;
}