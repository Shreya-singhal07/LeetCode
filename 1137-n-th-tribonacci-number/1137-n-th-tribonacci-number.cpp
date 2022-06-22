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