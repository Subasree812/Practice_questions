int* numberGame(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    int* result = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    int index = 0, i=0;
    for (i = 0; i < numsSize; i += 2) {
        result[index++] = nums[i + 1];
        result[index++] = nums[i];
    }
    return result;

}
