class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> v(26, 0);
            string word = strs[i];
            string key = "";
            for (int j = 0; j < word.size(); j++) {
                v[word[j] - 'a'] = v[word[j] - 'a'] + 1;
            }
            for (int k = 0; k < v.size(); k++) {
                char c = '0' + v[k];
                key.push_back(c);
            }
            m[key].push_back(word);
        }
        for (auto ele : m) {
            ans.push_back(ele.second);
        }
        return ans;
    }
};
