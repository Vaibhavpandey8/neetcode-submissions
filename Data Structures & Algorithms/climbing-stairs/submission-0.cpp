class Solution {
public:
    unordered_map<int,int>dp;
    int climbStairs(int i , int n){
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }
        if(dp.find(i)!=dp.end()){
            return dp[i];
        }
        int a1=climbStairs(i+1,n);
        int a2=climbStairs(i+2,n);
        int ans=a1+a2;
        dp[i]=ans;
        return ans;
        
    }
    int climbStairs(int n) {
        int an=climbStairs(0,n);      
        return an;          
    }
};
