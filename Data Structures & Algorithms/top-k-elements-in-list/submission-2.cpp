class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> memo;
        for (int i : nums) {
            memo[i] += 1;
        }
        map<int, vector<int>> v;
        for (auto [key, value] : memo) {
            v[value].push_back(key);
        }
        vector<int> res;
        for (auto i = v.rbegin(); i != v.rend() and res.size() < k; ++i) {
            for (int j = 0; j < i->second.size() and res.size() < k; ++j) {
                res.push_back(i->second.at(j));
            }
        }
        return res;
    }
};
