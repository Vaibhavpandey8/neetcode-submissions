class Solution {
public:
    int ways(int n, vector<int>& cost, vector<int>& dp) {
        // If there are 0 or 1 stairs,
        // no cost is required to reach the top
        if(n <= 1) {
            return 0;
        }

        // If answer is already calculated,
        // return it directly
        if(dp[n] != -1) {
            return dp[n];
        }

        // Reach current position by taking 1 step
        // We pay the cost of the previous stair
        int a1 = cost[n - 1] + ways(n - 1, cost, dp);

        // Reach current position by taking 2 steps
        // We pay the cost of the stair two positions before
        int a2 = cost[n - 2] + ways(n - 2, cost, dp);

        // Store the minimum cost
        dp[n] = min(a1, a2);

        return dp[n];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();

        // dp[i] = minimum cost required to reach position i
        vector<int> dp(n + 1, -1);

        // Start from position 0 and reach position n
        return ways(n, cost, dp);
    }
};