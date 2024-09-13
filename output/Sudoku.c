#include <stdio.h>
#include <stdbool.h>

#define SIZE 9

// Function to print the Sudoku board
void printBoard(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            printf("%d ", board[row][col]);
        }
        printf("\n");
    }
}

// Function to check if a number can be placed in a given cell
bool isValid(int board[SIZE][SIZE], int row, int col, int num) {
    // Check if the number is not in the current row and column
    for (int x = 0; x < SIZE; x++) {
        if (board[row][x] == num || board[x][col] == num) {
            return false;
        }
    }

    // Check if the number is not in the current 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// Function to solve the Sudoku using backtracking
bool solveSudoku(int board[SIZE][SIZE]) {
    int row, col;
    bool emptyCell = false;

    // Find the first empty cell
    for (row = 0; row < SIZE; row++) {
        for (col = 0; col < SIZE; col++) {
            if (board[row][col] == 0) {
                emptyCell = true;
                break;
            }
        }
        if (emptyCell) {
            break;
        }
    }

    // If no empty cell is found, the Sudoku is solved
    if (!emptyCell) {
        return true;
    }

    // Try placing numbers 1 to 9 in the empty cell
    for (int num = 1; num <= 9; num++) {
        if (isValid(board, row, col, num)) {
            board[row][col] = num;

            // Recursively solve the rest of the board
            if (solveSudoku(board)) {
                return true;
            }

            // Backtrack if the placement did not lead to a solution
            board[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int board[SIZE][SIZE] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    if (solveSudoku(board)) {
        printf("Sudoku solved successfully:\n");
        printBoard(board);
    } else {
        printf("No solution exists for the given Sudoku.\n");
    }

    return 0;
}
