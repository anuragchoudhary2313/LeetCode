class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> totalnums(m+n) ;
        
         ::merge(nums1.begin(), nums1.begin() + m, nums2.begin(), nums2.begin() + n, totalnums.begin());
           for (int i = 0; i < m + n; ++i) {
            nums1[i] = totalnums[i];
        }
    }
};