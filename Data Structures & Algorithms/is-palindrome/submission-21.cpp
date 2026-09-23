class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    
        while (left < right) {
            cout << "right: " << s[right] << endl;
            cout << "left: " << s[left] << endl;
            if (!isalnum(s[right])) {
                right--;
                continue;
            }
            else if (!isalnum(s[left])) {
                left++;
                continue;
            }
            else if (s[left] != s[right])
                return false;
            else {
                right--;
                left++;
            }
        }
        return true;
    }
};
