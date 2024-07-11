class Solution {
public:
    int reverse(int x) {
        long long rev_num = 0;
        long long  abs_x = abs(x);
        while (abs_x > 0) {
            rev_num = rev_num * 10 + abs_x % 10;
            abs_x = abs_x / 10;
        }
        if (x < 0) {
            rev_num = -rev_num;
        }
        if(abs(rev_num)>2147483648){
            rev_num = 0;
        }
        return rev_num;
    }
};
