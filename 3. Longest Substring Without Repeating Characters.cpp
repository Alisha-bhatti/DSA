class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); // store last seen index of each char
        int maxLen = 0;
        int start = 0; // start of current window

        for (int i = 0; i < s.size(); i++) {
            if (lastIndex[s[i]] >= start) {
                // char is repeated in current window
                start = lastIndex[s[i]] + 1;
            }
            lastIndex[s[i]] = i;
            maxLen = max(maxLen, i - start + 1);
        }
        return maxLen;
    }
};
