#include <stdio.h>

int hourglassSum(int arr_rows, int arr_columns, int** arr) {
    int best = -2147483647;

    for (int r = 0; r + 2 < arr_rows; r++) {
        for (int c = 0; c + 2 < arr_columns; c++) {
            int sum = arr[r][c] + arr[r][c + 1] + arr[r][c + 2]
                    + arr[r + 1][c + 1]
                    + arr[r + 2][c] + arr[r + 2][c + 1] + arr[r + 2][c + 2];

            if (sum > best) {
                best = sum;
            }
        }
    }

    return best;
}

int main(void) {
    int grid[6][6];
    int* rows[6];

    for (int r = 0; r < 6; r++) {
        rows[r] = grid[r];
        for (int c = 0; c < 6; c++) {
            if (scanf("%d", &grid[r][c]) != 1) {
                return 0;
            }
        }
    }

    printf("%d\n", hourglassSum(6, 6, rows));
    return 0;
}