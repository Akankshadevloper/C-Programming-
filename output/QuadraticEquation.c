#include <stdio.h>

int main() {
    double a, b, c, discriminant;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        printf("The roots are real and different.\n");
    } else if (discriminant == 0) {
        printf("The roots are real and equal.\n");
    } else {
        printf("The roots are complex and different.\n");
    }

    return 0;
}
