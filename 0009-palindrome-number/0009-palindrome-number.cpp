class Solution {
public:
    bool isPalindrome(int x) {
        long long int dup = x;
        long long int rev = 0;
        while(x>0){
            long long int digit = x % 10;
            rev = (rev * 10) + digit;
            x = x/10;
        }
        if(dup == rev){
            return true;
        }
        return false;
    }
};