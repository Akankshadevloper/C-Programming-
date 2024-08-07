#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year >= 1901 && year <= 2000) {
        printf("%d is in the 20th century.\n", year);
    } else if (year >= 2001) {
        printf("%d is in the 21st century.\n", year);
    } else {
        printf("%d is not in the 20th or 21st century.\n", year);
    }

    return 0;
}
