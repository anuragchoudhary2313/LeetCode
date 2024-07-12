class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(); 
        int n2 = nums2.size(); 

        int Size = n1 + n2;
        int sorting[Size];

        for (int i = 0; i < n1; ++i) {
            sorting[i] = nums1[i];
        }
        for (int i = 0; i < n2; ++i) {
            sorting[n1 + i] = nums2[i];
        }
        sort(sorting, sorting + Size);

        double median;
        if (Size % 2 == 0) {
            int mid1 = Size / 2;
            int mid2 = mid1-1;
            median = (sorting[mid1] + sorting[mid2]) / 2.0;
        } else {
            int mid = Size / 2;
            median = sorting[mid];
        }
        return median;
    }
};
