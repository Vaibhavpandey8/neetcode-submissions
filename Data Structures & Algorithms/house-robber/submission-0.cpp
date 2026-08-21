class Solution {
public:
    int robbery(int index,vector<int>& nums, vector<int>& dp){
        if(index==0){
            return nums[0];
        }
        if(index==1){
            return max(nums[0],nums[1]);
        }
        if(dp[index]!=-1){
            return dp[index];
        }
        int a1=nums[index]+robbery(index-2,nums,dp);
        int a2=robbery(index-1,nums,dp);
        int ans=max(a1,a2);
        dp[index]=ans;
        return ans;
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return robbery(nums.size()-1,nums,dp);        
    }
};
