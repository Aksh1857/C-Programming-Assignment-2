void moveZeroes(int* nums, int numsSize) {
    int write = 0;
    for (int read = 0; read < numsSize; ++read)
        if (nums[read] != 0) nums[write++] = nums[read];
    while (write < numsSize) nums[write++] = 0;
}
