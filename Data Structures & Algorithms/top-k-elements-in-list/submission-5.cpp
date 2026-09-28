class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        priority_queue<pair<int, int>> pq;

        // freq , element/key
        for (auto ele : m) {
            pq.push({ele.second, ele.first});
        }

        vector<int> ans;

        while (k--) {
            auto top = pq.top();
            ans.push_back(top.second);
            pq.pop();
        }
        return ans;
    }
};
