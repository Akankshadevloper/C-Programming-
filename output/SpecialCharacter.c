#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
        printf("%c is not a special character.\n", c);
    } else {
        printf("%c is a special character.\n", c);
    }

    return 0;
}
