class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, int> memo;

        for (const auto& i : strs) {
            string cur = i;
            std::sort(cur.begin(), cur.end());

            if (memo.count(cur) == 0) {
                res.push_back({i});
                memo[cur] = res.size() - 1;
            } else {
                res[memo[cur]].push_back(i);
            }
        }

        return res;
    }
};
