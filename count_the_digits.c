int countDigits(int num) {
    int n=num, c=0;
    while(n>0){
        int temp=n%10;
        if(num%temp == 0){
            c++;
        }
        n=n/10;
    }
    return c;
}
