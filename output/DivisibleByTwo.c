#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0 && number % 3 == 0) {
        printf("%d is divisible by both 2 and 3.\n", number);
    } else {
        printf("%d is not divisible by both 2 and 3.\n", number);
    }

    return 0;
}
