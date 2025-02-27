int countKeyChanges(char* s) {
    if (s == NULL || strlen(s) == 0) 
        return 0;
    
    int c = 0;
    char pre = tolower(s[0]); 
    
    for (int i = 1; s[i] != '\0'; i++) {
        char current = tolower(s[i]);
        if (current != pre) {
            c++;
            pre = current;
        }
    }
    
    return c; 
}
