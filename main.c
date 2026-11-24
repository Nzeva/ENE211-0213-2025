#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define ROWS 6
#define COLS 4

int main(void) {
    int grid[ROWS][COLS];
    int i, j, value = 1;

    /* Initialize: fill with 1, 2, 3, ... row by row */
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            grid[i][j] = value++;
        }
    }

    /* Traverse and print every element */
    printf("2D array (%d rows x %d columns):\n", ROWS, COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("grid[%d][%d] = %2d   ", i, j, grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
