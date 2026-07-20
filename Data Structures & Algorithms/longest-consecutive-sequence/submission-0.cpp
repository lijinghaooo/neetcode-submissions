class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int res = 0;

        unordered_map<int, int> memo;

        for (int i : nums) {
            if (memo[i] != 0) {
                continue;
            }

            memo[i] = memo[i - 1] + memo[i + 1] + 1;
            memo[i - memo[i - 1]] = memo[i];
            memo[i + memo[i + 1]] = memo[i];
            res = max(memo[i], res);
        }

        return res;
    }
};
