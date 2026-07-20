class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m = prices[0];
        int res = 0;
        for (int i : prices) {
            m = min(i, m);
            res = max(i - m, res);
        }
        return res;
    }
};
