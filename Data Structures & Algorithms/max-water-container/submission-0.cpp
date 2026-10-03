class Solution {
public:
    int maxArea(vector<int>& nums) {

        int start = 0;
        int end = nums.size() - 1;
        int maxiVol = 0;
        while (start < end) {
            int waterVol = min(nums[start], nums[end]) * (end - start);
            if (maxiVol < waterVol) {
                maxiVol = waterVol;
            }
            if (nums[start] >= nums[end]) {
                end--;
            } else {
                start++;
            }
        }
        return maxiVol;
    }
};