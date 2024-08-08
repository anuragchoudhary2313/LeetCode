class Solution {
public:
    int findGCD(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int GCD = min(nums[0], nums[nums.size() - 1]);
        while (GCD > 0) {
        if (nums[0] % GCD == 0 && nums[nums.size() - 1] % GCD == 0) {
            break;
        }
            GCD--;
        }
        return GCD;
    }
};
