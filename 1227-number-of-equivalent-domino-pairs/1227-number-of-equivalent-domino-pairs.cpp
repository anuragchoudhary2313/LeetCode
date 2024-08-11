class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        for (int i = 0; i < dominoes.size(); ++i) {
            int a = std::min(dominoes[i][0], dominoes[i][1]);
            int b = std::max(dominoes[i][0], dominoes[i][1]);
            dominoes[i][0] = a;
            dominoes[i][1] = b;
        }
        sort(dominoes.begin(), dominoes.end());
        int sum = 0;
        for (int i = 1, count = 1; i < dominoes.size(); ++i) {
            if (dominoes[i] == dominoes[i - 1]) {
                sum += count;
                count++;
            } else {
                count = 1;
            }
        }
        return sum;
    }
};
