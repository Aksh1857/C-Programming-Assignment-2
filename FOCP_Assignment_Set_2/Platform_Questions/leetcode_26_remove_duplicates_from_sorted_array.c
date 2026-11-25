int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;
    int write = 1;
    for (int i = 1; i < numsSize; ++i)
        if (nums[i] != nums[write - 1]) nums[write++] = nums[i];
    return write;
}
