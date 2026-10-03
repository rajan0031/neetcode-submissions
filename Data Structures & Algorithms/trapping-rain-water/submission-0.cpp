class Solution {
public:
    int trap(vector<int>& height) {

        vector<int> leftMax;
        vector<int> rightMax;
        int leftEleMax = 0;
        int rightEleMax = 0;
        int n = height.size();

        // calculate the left heights

        for (int i = 0; i < height.size(); i++) {
            leftMax.push_back(leftEleMax);
            if (height[i] > leftEleMax) {
                leftEleMax = height[i];
            }
        }

        // now claculate the 2nd setup right max heights

        for (int i = n - 1; i >= 0; i--) {
            rightMax.push_back(rightEleMax);
            if (height[i] > rightEleMax) {
                rightEleMax = height[i];
            }
        }
        reverse(rightMax.begin(), rightMax.end());
        // now actula ans evaluations goes here
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int val = min(leftMax[i], rightMax[i]) - height[i];
            if (val > 0) {
                ans = ans + val;
            }
        }
        return ans;
    }
};