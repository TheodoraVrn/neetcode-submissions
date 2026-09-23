class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq_map; // number, count

        for (auto i = 0; i < nums.size(); i++) {
            freq_map[nums[i]]++;
        }
        vector<int> result;
        for (int i=0;i<k;i++) {
            int max = INT_MIN;
            int res = 0;
            for (auto num : freq_map) {
                cout << num.first << ": " << num.second << endl;
                if (num.second > max) {  
                    max = num.second;
                    res = num.first;
                    
                }
                
                cout << "max: " << max << endl;
                cout << "res: " << res << endl;
            }
            freq_map.erase(res);
            result.push_back(res);
        }
        return result;
    }
};
