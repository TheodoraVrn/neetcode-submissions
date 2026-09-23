class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, zero_count = 0;
        for (auto num : nums) {
            if (num != 0) {
                prod  *= num;
            }
            else zero_count++;
        }

        // if there are two zeros, all the products will be zero
        if (zero_count >= 2) {
            vector<int> res (nums.size(), 0);
            return res;
        }

        else if (zero_count == 1) {
            vector<int> res (nums.size(), 0);
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    res.at(i) = prod;
                } 
            }
            return res;
        }

        else {
            vector<int> res(nums.size());
            for (int i = 0; i < nums.size(); i++) {
                res[i] = prod / nums[i];
            }
            return res;
        }
    }
};
