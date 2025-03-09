int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* result = malloc(wordsSize * sizeof(int));
        *returnSize = 0;
    for (int i = 0; i < wordsSize; i++) {
        for (int j = 0; words[i][j]; j++) {
            if (words[i][j] == x) { 
                result[(*returnSize)++] = i; 
                break;
            }
        }
    }
    return result;
}
