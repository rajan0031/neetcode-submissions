
class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int prodWithoutZero = 1;
        int zeroFlag = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                prodWithoutZero = prodWithoutZero * nums[i];
            } else {
                zeroFlag += 1;
            }
        }

        if (zeroFlag >= 2) {
            for (int i = 0; i < nums.size(); i++) {
                ans.push_back(0);
            }
            return ans;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                ans.push_back(prodWithoutZero);
            } else if (zeroFlag >= 1) {
                ans.push_back(0);
            } else {
                int val = prodWithoutZero / nums[i];
                ans.push_back(val);
            }
        }
        return ans;
    }
};


























