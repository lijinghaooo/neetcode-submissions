class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> memo(nums.begin(), nums.end());
        int res = 0;
        for (int i : memo) {
            if (memo.count(i - 1) == 0) {
                int length = 1;
                while (memo.count(i + length) > 0) {
                    ++length;
                }
                res = max(res, length);
            }
        }
        return res;
    }
};
