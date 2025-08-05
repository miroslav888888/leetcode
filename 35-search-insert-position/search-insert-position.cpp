class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int* ptr = &nums[0];
        if (target < nums[0]) return 0;
        if (target > nums[nums.size() - 1]) return nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (target == *(ptr + i)) return i;
            else if (target>*(ptr + i) && target<*(ptr + i + 1)) return i + 1;
        }
        return 0;
    }
};