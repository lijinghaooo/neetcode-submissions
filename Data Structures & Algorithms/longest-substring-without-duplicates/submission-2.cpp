class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) {
            return 0;
        }
        int left = 0;
        int right = 1;
        int res = 1;

        unordered_map<char, int> memo;
        memo[s[left]]++;

        while (right < s.size()) {
            while (memo[s[right]] > 0) {
                memo[s[left]]--;
                left++;
            }
            memo[s[right]]++;
            ++right;
            res = max(res, right - left);
        }
        return res;
    }
};
