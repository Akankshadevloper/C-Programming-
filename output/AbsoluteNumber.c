#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("The absolute value is %d\n", number);

    return 0;
}
