class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans = { -1,1 };
    ans[0] = binarysearch(nums, target, true);
    ans[1] = binarysearch(nums, target, false);
    return ans;
}
int binarysearch(vector<int>& nums, int target, bool issearchingleft) {
    int left = 0;
    int right = nums.size() - 1;
    int idx = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > target) right = mid - 1;
        else if (nums[mid] < target) left = mid + 1;
        else {
            idx = mid;
            if (issearchingleft) right = mid - 1;
            else left = mid + 1;
        }
    }
    return idx;
}
};