#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i;
    for (i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    printf("Reversed String: %s\n", str);
    return 0;
}
