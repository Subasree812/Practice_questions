bool isValidTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}
char* triangleType(int* nums, int numsSize) {
    if (numsSize != 3) 
        return "invalid"; 
    int a = nums[0], b = nums[1], c = nums[2];
    if (!isValidTriangle(a, b, c)) 
        return "none"; 
    if (a == b && b == c) 
        return "equilateral"; 
    if (a == b || b == c || a == c) 
        return "isosceles"; 
    return "scalene"; 
}
