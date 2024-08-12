class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closestSum = nums[0] + nums[1] + nums[2];
        int n = nums.size();

        for (int i = 0; i < n - 2; ++i) {
            int l = i + 1, r = n - 1;
            while (l< r) {
                int currentSum = nums[i] + nums[l] + nums[r];
                if (abs(currentSum - target) < abs(closestSum - target)) {
                    closestSum = currentSum;
                }
                if (currentSum < target) {
                    ++l;
                } else if (currentSum > target) {
                    --r;
                } else {
                    return currentSum; 
                }
            }
        }
        return closestSum;
    }
};