//OPTIMISED SOLUTION [DP]

class Solution {
public:
    int solve(vector<int>&dp, int n) //pass by reference
    {
        if(dp[n] != -1)
            return dp[n];
        else
        {
            int res;
            if(n == 0 || n == 1)
                res = n;
            else
                res = solve(dp,n-1) + solve(dp,n-2);
            dp[n] = res;
        }
        return  dp[n];
            
    }
    
    int fib(int n) 
    {
        vector<int>dp (n+1,-1); 
        return solve(dp,n); 
    }
};



//RECURSIVE SOLUTION

// class Solution {
// public:
//     int fib(int n) 
//     {
//         if(n == 0)
//             return 0;
//         if(n == 1)
//             return 1;
//        return  fib(n-1)+ fib(n-2);
        
//     }
// };