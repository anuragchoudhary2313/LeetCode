class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr;
        vector<int>ans;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                arr.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0; i<arr.size(); i++){
            nums.push_back(arr[i]);
            nums.push_back(ans[i]);
        }
        return nums;
       
    }
};