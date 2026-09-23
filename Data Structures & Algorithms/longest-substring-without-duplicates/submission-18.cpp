class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> chars;
        int length = 0;
        int l = 0;

        for (int r = 0; r < s.length(); r++) {
            while (chars.find(s[r]) != chars.end()) { // element found
                chars.erase(s[l]);
                l++;
            }
            chars.insert(s[r]);
            length = max(length, r - l + 1);
        }
        return length;
    }
};
