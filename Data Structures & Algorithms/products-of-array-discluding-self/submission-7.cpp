class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int leftProd = 1;
        int rightProd = 1;

        vector<int> ans;
        vector<int> leftArr;
        vector<int> rightArr;
        leftArr.push_back(1);
        rightArr.push_back(1);
        for (int i = 1; i < nums.size(); i++) {
            leftProd = leftProd * nums[i - 1];
            leftArr.push_back(leftProd);
        }

        for (int i = nums.size() - 2; i >= 0; i--) {
            rightProd = rightProd * nums[i + 1];
            rightArr.push_back(rightProd);
        }

        reverse(rightArr.begin(), rightArr.end());

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(leftArr[i] * rightArr[i]);
        }

        return ans;
    }
};
