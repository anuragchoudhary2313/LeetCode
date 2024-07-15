class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndex; 
        int maxLength = 0;
        int start = 0; 

        for (int i = 0; i < s.length(); ++i) {
            char currChar = s[i];

            if (charIndex.find(currChar) != charIndex.end()) {
                start = max(start, charIndex[currChar] + 1);
            }

          
            charIndex[currChar] = i;

        
            maxLength = max(maxLength, i - start + 1);
        }

        return maxLength;
    }
};
