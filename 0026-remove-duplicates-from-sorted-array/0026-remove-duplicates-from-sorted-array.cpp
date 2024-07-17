class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0; 
        }

        unordered_set<int> Elements;
        int count = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (Elements.find(nums[i]) == Elements.end()) {
                Elements.insert(nums[i]);
                nums[count++] = nums[i]; 
            }
        }

        return count;
    }
};
