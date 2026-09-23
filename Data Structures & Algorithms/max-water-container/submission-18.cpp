class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_amount = 0;
        int l = 0;
        int r = heights.size() - 1;
        while (l < r) {
            
            if (heights[l] <= heights[r]) {
                max_amount = max(max_amount, heights[l] * (r - l));
                l++;
            }
            else if (heights[l] > heights[r]) {
                max_amount = max(max_amount, heights[r] * (r - l));
                r--;
            }
        }
        return max_amount;
    }
};
