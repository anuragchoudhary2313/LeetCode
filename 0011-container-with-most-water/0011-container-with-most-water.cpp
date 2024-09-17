class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max = 0;
        int s = 0;
        int e = n-1;
        while(s<e){
            int area = min(height[s],height[e]) * (e-s);
            if(max<area){
                max= area;
            }
            if(height[s]>height[e]){
                e--;
            }
            else{
                s++;
            }
        }
        return max;
    }
};