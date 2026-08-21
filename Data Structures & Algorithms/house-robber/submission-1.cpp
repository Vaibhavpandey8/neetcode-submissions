class Solution {
public:
    int robbery(int index, vector<int>& nums, vector<int>& dp) {

        // If there is only one house,
        // the only option is to rob house 0
        if(index == 0) {
            return nums[0];
        }

        // If there are two houses,
        // we can rob only one of them
        // So choose the one with maximum money
        if(index == 1) {
            return max(nums[0], nums[1]);
        }

        // If answer for this index is already calculated,
        // return it directly
        if(dp[index] != -1) {
            return dp[index];
        }

        // Option 1: Rob current house
        // Then we cannot rob the previous house
        int a1 = nums[index] + robbery(index - 2, nums, dp);

        // Option 2: Don't rob current house
        // Move to the previous house
        int a2 = robbery(index - 1, nums, dp);

        // Choose the option that gives maximum money
        int ans = max(a1, a2);

        // Store the answer for this index
        dp[index] = ans;

        return ans;
    }

    int rob(vector<int>& nums) {

        // dp[i] = maximum money that can be robbed
        // from houses 0 to i
        vector<int> dp(nums.size(), -1);

        // Start from the last house
        return robbery(nums.size() - 1, nums, dp);
    }
};