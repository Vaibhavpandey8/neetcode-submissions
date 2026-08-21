class Solution {
public:
    int ways(int n,vector<int>& cost,vector<int>& dp){
        if(n<=1)
        return 0;
        if(dp[n]!=-1){
            return dp[n];
        }
        int a1=cost[n-1]+ways(n-1,cost,dp);
        int a2=cost[n-2]+ways(n-2,cost,dp);
        dp[n]=min(a1,a2);
        return min(a1,a2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
        return ways(n,cost,dp);        
    }
};
