class Solution {
public:
    bool isPalindrome(string s) {

        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z')) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = char(tolower(s[i]));
                }
                continue;
            } else {
                s[i] = ' ';
            }
        }

        int start = 0;
        int end = s.size() - 1;

        while (start < end) {
            while (s[start] == ' ' && start != end) {
                start++;
            }
            while (s[end] == ' ' && start != end) {
                end--;
            }
            if (start >= end) {
                break;
            }
            if (s[start] != s[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};