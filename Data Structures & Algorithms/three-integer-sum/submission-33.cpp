class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       /* Since the algorithm already:
        skips duplicate i
        skips duplicate j

        that alone is sufficient to not skip duplicate k.*/
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) break; // everything after it is also positive
            // prevents duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue; // skip duplicate first numbers

            int j = i + 1;
            int k = nums.size() - 1;
            int target = -nums[i];

            while (j < k) {
                if (nums[j] + nums[k] == target) {
                    result.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    // skip duplicate second numbers
                    while (j < k && nums[j] == nums[j - 1]) {
                        j++;
                    }
                }
                else if (nums[j] + nums[k] > target) {
                    k--;
                }
                else j++;
            }
        }
        return result;
    }
};
