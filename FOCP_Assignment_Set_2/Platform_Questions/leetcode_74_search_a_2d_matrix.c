#include <stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    if (matrixSize == 0 || matrixColSize[0] == 0) return false;
    int cols = matrixColSize[0], lo = 0, hi = matrixSize * cols;
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        int value = matrix[mid / cols][mid % cols];
        if (value < target) lo = mid + 1; else hi = mid;
    }
    return lo < matrixSize * cols && matrix[lo / cols][lo % cols] == target;
}
