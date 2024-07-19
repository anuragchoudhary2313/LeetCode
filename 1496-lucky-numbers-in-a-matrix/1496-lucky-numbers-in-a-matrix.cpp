class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
       
       map<int,int>mp;

        for (int i = 0; i < n; ++i) {
            int ans = INT_MAX;
            for (int j = 0; j < m; ++j) {
                if (matrix[i][j] < ans) {
                ans = matrix[i][j];
                }
               
            }
            mp[ans]++;
        }

        for (int j = 0; j < m; ++j) {
            int ans = INT_MIN;
            for (int i = 0; i < n; ++i) {
                if (matrix[i][j] > ans) {
                ans = matrix[i][j];
                }
               
            }
            mp[ans]++;
        }

       vector<int>a;
       for(auto b:mp){
        if(b.second>1){
            a.push_back(b.first);
        }
       }
       return a;
    }
};
