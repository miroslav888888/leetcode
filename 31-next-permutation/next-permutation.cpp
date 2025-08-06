class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        bool find = false;
        for (int i = size - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                for (int j = size - 1; j >= 0; j--) {
                    if (nums[i] < nums[j]) {
                        swap(nums[i], nums[j]);
                        reverse(nums.begin()+i + 1, nums.end());
                        find = true;
                        break;
                    }
                }
                break;
            }
        }
        if (find == false) {
            reverse(nums.begin(), nums.end());
        }
    }
};