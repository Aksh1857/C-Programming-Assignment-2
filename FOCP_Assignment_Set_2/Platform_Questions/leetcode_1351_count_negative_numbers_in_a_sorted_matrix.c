int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int count = 0;
    for (int r = 0; r < gridSize; ++r)
        for (int c = 0; c < gridColSize[r]; ++c)
            if (grid[r][c] < 0) ++count;
    return count;
}
