int firstUniqChar(char* s) {
   int i, j;
    int n = strlen(s);
    int isUnique;
    for (i = 0; i < n; i++) {
        isUnique = 1;
        for (j = 0; j < n; j++) {
            if (i != j && s[i] == s[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            return i; 
        }
    }
    return -1; 
}
