class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        int low = 0;
        int high = rows - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int maxCol = 0;
            for (int j = 0; j < cols; ++j) {
                if (mat[mid][j] > mat[mid][maxCol]) {
                    maxCol = j;
                }
            }
            bool isPeak = true;
            if (mid > 0 && mat[mid][maxCol] < mat[mid - 1][maxCol]) isPeak = false;
            if (mid < rows - 1 && mat[mid][maxCol] < mat[mid + 1][maxCol]) isPeak = false;
            
            if (isPeak) {
                return {mid, maxCol};
            } else if (mid > 0 && mat[mid][maxCol] < mat[mid - 1][maxCol]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return {-1, -1}; 
    }
};
