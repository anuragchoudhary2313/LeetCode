class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        vector<int> count(100, 0);
        int sum = 0;
        for (int i = 0; i < dominoes.size(); ++i) {
            int a = max(dominoes[i][0], dominoes[i][1]);
            int b = min(dominoes[i][0], dominoes[i][1]);
            int index = a * 10 + b; 
            sum += count[index]++;
        }

        return sum;
    }
};