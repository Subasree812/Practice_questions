bool checkIfPangram(char* sentence) {
    if (strlen(sentence) < 26) {
        return false; 
    }
    char a[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < 26; i++) {
        if (strchr(sentence, a[i]) == NULL) {
            return false; 
        }
    }
    return true; 
}
