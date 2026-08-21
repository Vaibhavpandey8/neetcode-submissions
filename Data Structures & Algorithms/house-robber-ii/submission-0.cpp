class Solution {
public:

    // Normal House Robber
    int robbery(int index, vector<int>& nums, vector<int>& dp) {

        // Only one house
        if(index == 0) {
            return nums[0];
        }

        // Two houses
        if(index == 1) {
            return max(nums[0], nums[1]);
        }

        // Already calculated
        if(dp[index] != -1) {
            return dp[index];
        }

        // Rob current house
        int a1 = nums[index] + robbery(index - 2, nums, dp);

        // Don't rob current house
        int a2 = robbery(index - 1, nums, dp);

        // Maximum of both choices
        dp[index] = max(a1, a2);

        return dp[index];
    }

    int rob(vector<int>& nums) {

        int n = nums.size();

        // No houses
        if(n == 0) {
            return 0;
        }

        // Only one house
        if(n == 1) {
            return nums[0];
        }

        // Case 1:
        // Consider houses 0 to n-2
        vector<int> arr1(n - 1);

        for(int i = 0; i < n - 1; i++) {
            arr1[i] = nums[i];
        }

        // Case 2:
        // Consider houses 1 to n-1
        vector<int> arr2(n - 1);

        for(int i = 1; i < n; i++) {
            arr2[i - 1] = nums[i];
        }

        // DP for first case
        vector<int> dp1(n - 1, -1);
        int curr1 = robbery(n - 2, arr1, dp1);

        // DP for second case
        vector<int> dp2(n - 1, -1);
        int curr2 = robbery(n - 2, arr2, dp2);

        // Take maximum of both cases
        return max(curr1, curr2);
    }
};