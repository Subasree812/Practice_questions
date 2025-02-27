int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int differenceOfSum(int* nums, int numsSize) {
   int a = 0, b = 0;
    for (int i = 0; i < numsSize; i++) {
        a += nums[i];
        b += digitSum(nums[i]);
    }
    return abs(a - b);
}
