void setZeroes(int** matrix, int matrixSize, int* matrixColSize) {
    if (matrixSize == 0 || matrixColSize[0] == 0) return;
    int rows = matrixSize, cols = matrixColSize[0], firstRowZero = 0, firstColZero = 0;
    for (int c = 0; c < cols; ++c) if (matrix[0][c] == 0) firstRowZero = 1;
    for (int r = 0; r < rows; ++r) if (matrix[r][0] == 0) firstColZero = 1;
    for (int r = 1; r < rows; ++r) for (int c = 1; c < cols; ++c)
        if (matrix[r][c] == 0) matrix[r][0] = matrix[0][c] = 0;
    for (int r = 1; r < rows; ++r) for (int c = 1; c < cols; ++c)
        if (matrix[r][0] == 0 || matrix[0][c] == 0) matrix[r][c] = 0;
    if (firstRowZero) for (int c = 0; c < cols; ++c) matrix[0][c] = 0;
    if (firstColZero) for (int r = 0; r < rows; ++r) matrix[r][0] = 0;
}
