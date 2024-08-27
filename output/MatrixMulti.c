#include <stdio.h>

void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int result[][10], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][10], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;
    
    // Taking input for first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &r1, &c1);
    int firstMatrix[10][10];
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    // Taking input for second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &r2, &c2);
    int secondMatrix[10][10];
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    // Check if matrices can be multiplied
    if (c1 != r2) {
        printf("Error! The number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return -1;
    }

    // Resultant matrix
    int result[10][10];

    // Multiplying matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, r1, c1, r2, c2);

    // Displaying the result
    printf("The resulting matrix after multiplication is:\n");
    displayMatrix(result, r1, c2);

    return 0;
}
