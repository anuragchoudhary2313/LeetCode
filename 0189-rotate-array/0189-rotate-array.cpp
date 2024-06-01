class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n);
        int index=0;
        while(index<n){
            int newindex=(index+k)%n;
            ans[newindex]=nums[index];
            index++;
        }
        nums=ans;
    }
};