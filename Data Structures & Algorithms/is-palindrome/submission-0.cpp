class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            while (not valid(s[left]) and left < right) {
                ++left;
            }
            if (left >= right) {
                break;
            }
            while (not valid(s[right]) and left < right) {
                --right;
            }
            if (left >= right) {
                break;
            }
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }

    bool valid(char c) {
        return isalpha(c) or isdigit(c);
    }
};
