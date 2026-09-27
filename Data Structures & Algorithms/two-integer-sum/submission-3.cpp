class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int val1 = nums[i];
            int searchableNum = target - val1;
            if (m.find(searchableNum) != m.end()) {
                if (i > m[searchableNum]) {
                    return {m[searchableNum], i};
                } else {
                    return {i, m[searchableNum]};
                }
            } else {
                m[val1] = i;
            }
        }
        return {};
    }
};
