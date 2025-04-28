class Solution {
public:
static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return (a.second < b.second) || (a.second == b.second && a.first < b.first);
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> ans;
         vector<pair<int, int>> nums;
        for(int i=0; i<n; i++){
            int diff = abs(arr[i]-x);
            nums.push_back({arr[i],diff});
        }
        sort(nums.begin(),nums.end(),comp);
        for(int j=0; j<k; j++){
          ans.push_back(nums[j].first);
        }
       sort(ans.begin(),ans.end());
       return ans;
    }
};