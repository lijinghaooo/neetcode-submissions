class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> memo;

        for (int i = 0; i <nums.size(); ++i) {
            int cur = nums[i];
            int v = target - cur;
            if (memo.count(v) > 0) {
                return {memo[v], i};
            }
            if (memo.count(cur) == 0) {
                memo[cur] = i;
            }
        }
        return {};
    }
};
