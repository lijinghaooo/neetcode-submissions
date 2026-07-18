class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> counts(26);
        for (char i : s) {
            counts[i - 'a']++;
        }
        for (char i : t) {
            counts[i - 'a']--;
            if (counts[i - 'a'] < 0) {
                return false;
            }
        }
        return std::all_of(counts.begin(), counts.end(), [](int i) { return i == 0; });
    }
};
