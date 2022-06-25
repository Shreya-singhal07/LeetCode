class Solution {
public:
    int solve(vector<int>&dp, int n)
    {
        if(dp[n] == -1)
        {
            if(n<=2)
                return n;
            if(dp[n] != -1)
                return dp[n];
            int ways1 = solve(dp,n-1);
            int ways2 = solve(dp,n-2);
            dp[n] = ways1 + ways2;   
        }
        
        return dp[n];
    }
    
    int climbStairs(int n) 
    {
        vector<int>dp(n+1,-1);
        return solve(dp,n);
    }

};
// class Solution {
// public:
    
//     int climbStairs(int n) 
//     {
//          if(n<=3)
//             return n;
        
//         return climbStairs(n - 1) + climbStairs(n - 2);
//     }
// };

