class Solution {
public:
    int solve(vector<int>&dp, int n) //pass by reference
    {
        if(dp[n] == -1)
        {
            int res;
            if(n == 0 )
                res = n;
            else if(n == 1 || n == 2)
                res = 1;
            else
                res = solve(dp,n-1) + solve(dp,n-2) + solve(dp,n-3);
            dp[n] = res;
        }
        return  dp[n];
            
    }
 
    int tribonacci(int n) 
    {
        vector<int>dp (n+2,-1); 
        return solve(dp,n);
    }
};

//TABULATION

// class Solution 
// {
// public:

//     int tribonacci(int n) 
//     {
//         vector <int> dp(n+3, -1);
//         dp[0] = 0;
//         dp[1] = 1;
//         dp[2] = 1;
        
//         for(int i = 3; i<=n; i++)
//         {
//             dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
//         }
        
//         return dp[n];
//     }

// };

