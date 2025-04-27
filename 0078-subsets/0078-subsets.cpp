class Solution {
public:

void back(int i,vector<int>& nums ,vector<int>&ans,vector<vector<int>>& set ){
  
    if(i>= nums.size()){
        set.push_back(ans);
        return;
    }
    ans.push_back(nums[i]);
    back(i+1,nums,ans,set);
    ans.pop_back();
    back(i+1,nums,ans,set);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> set;
        vector<int>ans;

        back(0,nums,ans,set);
        return set;
    }
};