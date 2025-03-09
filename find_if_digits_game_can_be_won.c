bool canAliceWin(int* nums, int numsSize) {
   int i=0,s=0,d=0;
   for(i=0;i<numsSize;i++){
    if(nums[i]<10){
        s=s+nums[i];
    }
    else{
        d=d+nums[i];
    }
   } 
   if(s>d || s<d){
    return true;
   }
   else{
    return false;
   }
}
