class Solution {
public:
    bool canJump(vector<int>& nums) {
         int max = 0;
        int range = 0;
        int jumps = 0;
           int n = nums.size();
           if(n==1 && n==0){
             return true;
              }
           
        for (int i = 0; i < n; i++) {
            max = std::max( max , i + nums[i]);
            if (range == i) {
                range = max;
                jumps++;

                if (range >= n - 1) {
                    return true;
                }
               
            }
        }
        return false;
    }
};