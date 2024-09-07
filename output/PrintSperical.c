#include <stdio.h>

void printSpiral(int m, int n, int matrix[m][n]) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int i;

    while (top <= bottom && left <= right) {
        // Print the top row
        for (i = left; i <= right; i++) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print the right column
        for (i = top; i <= bottom; i++) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print the bottom row if it exists
        if (top <= bottom) {
            for (i = right; i >= left; i--) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print the left column if it exists
        if (left <= right) {
            for (i = bottom; i >= top; i--) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Spiral Order: ");
    printSpiral(m, n, matrix);

    return 0;
}
