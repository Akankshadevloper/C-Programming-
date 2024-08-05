#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sqrt_num = sqrt(num);
    if (sqrt_num * sqrt_num == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is not a perfect square.\n", num);
    }

    return 0;
}
