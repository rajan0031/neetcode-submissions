class Solution {
   public:
    string encode(vector<string>& strs) {
        string ans = "";

        for (int i = 0; i < strs.size(); i++) {
            string word = strs[i];
            ans = ans + word;
            // ans.push_back(word);

            ans.push_back('`');
        }

        return ans;
    }

    vector<string> decode(string s) {
        string word = "";
        vector<string> ans;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '`') {
                word.push_back(s[i]);
            } else if (s[i] == '`') {
                ans.push_back(word);
                word = "";
            }
        }
        return ans;
    }
};
