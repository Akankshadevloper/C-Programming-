#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;
    
    // Prompt the user to input the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Dynamically allocate memory for an array of pointers (each representing a row)
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for each row and initialize the matrix
    for (int i = 0; i < rows; i++) {
        int cols;
        
        // Prompt the user to input the number of columns for each row
        printf("Enter the number of columns for row %d: ", i + 1);
        scanf("%d", &cols);

        // Dynamically allocate memory for the current row
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i + 1);
            return 1;
        }

        // Initialize the elements in the current row
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i + j;
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        int cols = _msize(matrix[i]) / sizeof(int);  // Get the number of columns
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
