class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int res = 0;

        while (left < right) {
            int cur = (right - left) * min(heights[right], heights[left]);
            res = max(res, cur);
            if (heights[right] < heights[left]) {
                --right;
            } else {
                ++left;
            }
        }

        return res;
    }
};
