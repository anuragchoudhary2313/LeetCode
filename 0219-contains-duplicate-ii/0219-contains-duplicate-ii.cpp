class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for (int i = 0; i < (int)nums.size(); i++) {
            for (int j = i + 1; j < i + k + 1; j++) {
                if (j > (int)nums.size() - 1)
                    break;
                if (nums[i] == nums[j]) {
                    return true;
                }
            }
        }

        return false;
    }
};