class Solution {
   public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> v1(26, 0);
        vector<int> v2(26, 0);
        for (int i = 0; i < s.size(); i++) {
            v1[s[i] - 'a'] = v1[s[i] - 'a'] + 1;
        }

        for (int i = 0; i < t.size(); i++) {
            v2[t[i] - 'a'] = v2[t[i] - 'a'] + 1;
        }

        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) return false;
        }
        return true;
    }
};
