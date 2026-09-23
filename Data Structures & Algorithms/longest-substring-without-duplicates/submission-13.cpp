class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> myset;
        int l = 0;
        int max_size = 0;

        for (auto r = 0; r < s.length(); r++) {
            while (myset.find(s[r]) != myset.end()) { // element found
                myset.erase(s[l]);
                l++;
            }
            myset.insert(s[r]);
            max_size = max(max_size, r - l + 1);
        }
        return max_size;
    }
};
