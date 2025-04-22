class Solution {
public:
     
     void  back(vector<int>& nums, int index,  vector<vector<int>> &ans ){
      int n=nums.size();
        if(index==n){
            ans.push_back({nums});
        }
        for(int i=index; i<n; i++){
            swap(nums[index],nums[i]);
            back(nums, index+1,ans);
             swap(nums[index],nums[i]);
        }
     }

    vector<vector<int>> permute(vector<int>& nums) {
      
        vector<vector<int>> ans;
       
        back(nums,0,ans);
        return ans;
        
    }
};