class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
       
       int ans=0;

       while(start<=end){

        int mid = start + (end - start)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]< target){
            start = mid +1;
        }
        else if(nums[mid]> target){
            end = mid-1;
        }
        mid = start + (end - start)/2;
       }
      return -1;

    }
};