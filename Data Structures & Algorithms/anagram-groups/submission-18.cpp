class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res; // sorted string, list of strings/anagrams
        for (auto s : strs) {
            string sortedS = s; // create a copy because sort affect the initial array
            sort(sortedS.begin(), sortedS.end());
            res[sortedS].push_back(s); // at the key/sorted string, add the strings/anagrams
        }
        //for (auto s : res) 
        //cout << s.first << endl;

        vector<vector<string>> result;
        for (auto pairs: res) {
            result.push_back(pairs.second); // return the list of string corresponding to a specific key
        }
        return result;
    }
};
