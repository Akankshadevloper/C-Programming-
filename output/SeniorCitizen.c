#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 60) {
        printf("You are eligible for senior citizen benefits.\n");
    } else {
        printf("You are not eligible for senior citizen benefits.\n");
    }

    return 0;
}
