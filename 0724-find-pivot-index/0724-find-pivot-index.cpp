class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n = nums.size();
       int sumleft=0;
       int totalsum = accumulate(nums.begin(),nums.end(), 0);\

       for(int i =0; i<n; i++){
       int sumright = totalsum - sumleft - nums[i];
       if(sumright==sumleft){
        return i;
       }
       sumleft+=nums[i];
       }
       return -1;
    }
};