class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if (nums.empty()) {
            return {-1, -1};
        }
        int s = 0;
        int e = n - 1;
        int mid = s + (e - s) / 2;
        int start = -1, end = -1;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                start = mid;
                 e = mid - 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        s = 0;
        e = n - 1;
        while (s <= e) {
            mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                end = mid;
                s = mid + 1;
            } else if (nums[mid] > target) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return {start, end};
    }
};
