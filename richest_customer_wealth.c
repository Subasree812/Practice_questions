int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int maxi = 0;
    for (int i = 0; i < accountsSize; i++) {
        int cus = 0;
        for (int j = 0; j < accountsColSize[i]; j++) {
            cus += accounts[i][j];
        }
        if (cus > maxi) {
            maxi = cus;
        }
    }
    return maxi;
}
