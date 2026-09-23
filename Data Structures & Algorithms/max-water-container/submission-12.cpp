class Solution {
public:
    int maxArea(vector<int>& heights) {
        int max_area = INT_MIN;
        for (int i = 0; i < heights.size() - 1; i++) {
            for (int j = i + 1; j < heights.size(); j++) {
                int cur = (j - i)*min(heights[i], heights[j]);
                max_area = max(max_area, cur);
            }
        }
        return max_area;
    }
};
