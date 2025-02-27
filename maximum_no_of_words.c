int mostWordsFound(char** sentences, int sentencesSize) {
     int maxWords = 0;
    for (int i = 0; i < sentencesSize; i++) {
        int c = 1; 
        for (int j = 0; sentences[i][j] != '\0'; j++) {
            if (sentences[i][j] == ' ') {
                c++;
            }
        }
        if (c > maxWords) {
            maxWords = c;
        }
    }
    return maxWords;
}
