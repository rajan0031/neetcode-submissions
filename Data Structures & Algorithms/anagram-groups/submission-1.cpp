class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::map<std::vector<int>, vector<string>> m;
        vector<vector<string>> ans;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> v(26, 0);
            string word = strs[i];

            for (int j = 0; j < word.size(); j++) {
                v[word[j] - 'a'] = v[word[j] - 'a'] + 1;
            }
            m[v].push_back(word);
        }
        for (auto ele : m) {
            ans.push_back(ele.second);
        }
        return ans;
    }
};
