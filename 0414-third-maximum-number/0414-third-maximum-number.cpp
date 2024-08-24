class Solution {
public:
    int thirdMax(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        if (nums.size() >= 3) {
            return nums[2];
        } else {
            return nums[0];
        }
    }
};
