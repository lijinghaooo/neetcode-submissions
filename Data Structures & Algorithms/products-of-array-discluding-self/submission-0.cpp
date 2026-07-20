class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> memo(length + 1, 1);

        memo[1] = nums[0];
        for (int i = 1; i < length; ++i) {
            memo[i + 1] = memo[i] * nums[i];
        }

        vector<int> res(length, 1);
        int cur = 1;
        for (int i = length - 1; i >= 0; --i) {
            res[i] = cur * memo[i];
            cur *= nums[i];
        }
        return res;
    }
};
