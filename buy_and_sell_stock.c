int maxProfit(int* prices, int pricesSize) {
   int p = 0;
    
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] > prices[i - 1]) {
            p += prices[i] - prices[i - 1];
        }
    }
    
    return p; 
}
