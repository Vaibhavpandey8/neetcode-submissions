class Solution { 
public: 
    unordered_map<int,int> dp; // Stores already calculated results for each step

    int climbStairs(int i, int n) { 
        // If we have reached exactly the nth step,
        // there is 1 valid way to reach the top
        if(i == n) { 
            return 1; 
        } 

        // If we have crossed the nth step,
        // this is not a valid way
        if(i > n) { 
            return 0; 
        } 

        // If answer for this step is already calculated,
        // return it directly (memoization)
        if(dp.find(i) != dp.end()) { 
            return dp[i]; 
        } 

        // Take 1 step
        int a1 = climbStairs(i + 1, n); 

        // Take 2 steps
        int a2 = climbStairs(i + 2, n); 

        // Total ways = ways by taking 1 step + ways by taking 2 steps
        int ans = a1 + a2; 

        // Store the result to avoid recalculating it
        dp[i] = ans; 

        return ans; 
    } 

    int climbStairs(int n) { 
        // Start from step 0 and calculate ways to reach step n
        return climbStairs(0, n);            
    } 
};