int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i=0;
    int res=0;
    for(i=0;i<hoursSize;i++){
        if(hours[i]>=target){
            res++;
        }
    }
   return res;
}
