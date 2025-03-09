bool threeConsecutiveOdds(int* arr, int arrSize) {
    int i = 0,c = 0;
    for (i = 0; i < arrSize; i++) {
        if(arr[i] % 2 != 0){
            c++;
            if(c==3){
                return true;
            }
        }
        else{
            c=0;
        }
    }
    return false;
}
