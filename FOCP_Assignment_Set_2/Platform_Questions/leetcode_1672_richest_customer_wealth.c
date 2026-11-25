int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int best = 0;
    for (int r = 0; r < accountsSize; ++r) {
        int sum = 0;
        for (int c = 0; c < accountsColSize[r]; ++c) sum += accounts[r][c];
        if (sum > best) best = sum;
    }
    return best;
}
