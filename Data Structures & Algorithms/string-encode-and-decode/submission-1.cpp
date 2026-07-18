class Solution {
public:

    string encode(vector<string>& strs) {
        string res;

        for (const auto& i : strs) {
            uint8_t length = static_cast<uint8_t>(i.size());
            res.push_back(static_cast<unsigned char>(length));
            res += i;
        }

        return res;
    }

    vector<string> decode(string s) {
        if (s.size() == 0) {
            return {};
        }
        vector<string> res;
        uint32_t start = 0;
        while (start < s.size()) {
            unsigned char c = s[start];
            uint32_t length = static_cast<uint32_t>(c);
            start += 1;
            res.emplace_back(s.substr(start, length));
            start += length;
        }
        return res;
    }
};
