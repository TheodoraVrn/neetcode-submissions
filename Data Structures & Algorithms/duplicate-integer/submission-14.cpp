#include <iostream>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> int_set;
        for (int i : nums) {
            // if element is not found in the set
            if (int_set.find(i) == int_set.end()) {
                int_set.insert(i);
                cout << i;
            }
            else return true;
        }
        return false;
    }
};