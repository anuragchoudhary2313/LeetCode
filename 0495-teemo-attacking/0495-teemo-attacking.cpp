class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n == 0){
          return 0; 
        } 

        int totalDuration = 0;

        for (int i = 0; i < n -1; i++) {
            totalDuration += min(duration, timeSeries[i + 1] - timeSeries[i]);
        }
        totalDuration += duration;
        return totalDuration;
    }
};