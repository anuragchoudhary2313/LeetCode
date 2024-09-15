class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> sorting;

        for(int i = 0; i < n1; i++) {
            sorting.push_back(nums1[i]);
        }
        for(int i = 0; i < n2; i++) {
            sorting.push_back(nums2[i]);
        }
        sort(sorting.begin(), sorting.end());

        double median;
        int size = sorting.size();
        int mid = size / 2;

        if(size % 2 != 0) {
            median = sorting[mid];
        } else {
            median = (sorting[mid - 1] + sorting[mid]) / 2.0;
        }
        return median;
    }
};
