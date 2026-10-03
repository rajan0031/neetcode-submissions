class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size() - 2; i++) {

            if (i >= 1 && nums[i] == nums[i - 1]) {
                continue;
            }

            int start = i + 1;
            int end = nums.size() - 1;

            int target = 0;

            while (start < end) {
                vector<int> temp;

                int sum = nums[i] + nums[start] + nums[end];

                if (sum == target) {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    ans.push_back(temp);
                    while (start < end && nums[start] == nums[start + 1]) {
                        start++;
                    }

                    while (start < end && nums[end] == nums[end - 1]) {
                        end--;
                    }
                    start++;
                    end--;
                }

                else if (sum < target) {
                    start++;

                } else if (sum > target) {
                    end--;
                }
            }
        }
        return ans;
    }
};