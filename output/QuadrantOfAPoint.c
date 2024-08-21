#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates (x, y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point lies in the First quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("The point lies in the Second quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("The point lies in the Third quadrant.\n");
    } else if (x > 0 && y < 0) {
        printf("The point lies in the Fourth quadrant.\n");
    } else if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    }

    return 0;
}
