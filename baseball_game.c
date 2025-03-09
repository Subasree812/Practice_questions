int calPoints(char** operations, int operationsSize) {
    int scores[operationsSize]; 
    int c = 0;

    for (int i = 0; i < operationsSize; i++) {
        if (operations[i][0] == 'C') {
            c--; 
        } else if (operations[i][0] == 'D') {
            scores[c] = 2 * scores[c - 1]; 
            c++;
        } else if (operations[i][0] == '+') {
            scores[c] = scores[c - 1] + scores[c - 2]; 
            c++;
        } else {
            scores[c] = atoi(operations[i]); 
            c++;
        }
    }

    int sum = 0;
    for (int i = 0; i < c; i++) {
        sum += scores[i];
    }

    return sum; 
}
