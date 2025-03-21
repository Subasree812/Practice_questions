int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
   int* output = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int p = 1;
    for (int i = 0; i < numsSize; i++) {
        output[i] = p;
        p *= nums[i];
    }
    int s = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        output[i] *= s;
        s *= nums[i];
    }
    return output;
}
