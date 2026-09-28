class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            int size = word.size();
            ans = ans + to_string(size) + "#" + word;
        }
        return ans;
    }

    vector<string> decode(string s) {
        int i = 0;
        int length = 0;
        vector<string> ans;
        while (i < s.size()) {
            int j = i;

            while (s[j] != '#') {
                length = length * 10 + (s[j] - '0');
                j++;
            }

            ans.push_back(s.substr(j + 1, length));
            i = j + 1 + length;
            length = 0;
        }

        return ans;
    }
};
