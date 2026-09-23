class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> countS;
        unordered_map<char, int> countT;
        for (int i = 0; i < s.length(); i++) {
            countS[s[i]]++;
            countT[t[i]]++;
        }
        return countS == countT;
    }
};
/*public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> count_map;
        unordered_map<char, int> count_map2;
        for (auto c : s) {
            // if element is found
            auto it = count_map.find(c);
            if (it != count_map.end()) {
                it->second ++;
            }
            else count_map.insert({c, 1});
        }
        for (auto i : count_map) 
            cout << i.first << ": " << i.second
            << endl;
        for (auto c : t) {
            // if element is found
            auto it = count_map2.find(c);
            if (it != count_map2.end()) {
                it->second ++;
            }
            else count_map2.insert({c, 1});
        }
        for (auto i : count_map) {

        }
        return false;
    }
};*/

