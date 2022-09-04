class Solution 
{
public:
    int minimumDifference(vector<int>& nums, int k) 
    {
        int n = nums.size();
        if(n <= 1)
            return 0;
        int mind = INT_MAX;
        sort(nums.begin(),nums.end());
        if(n==k)
            return nums[n-1]-nums[0];
        for(int i = 0 ; i+k-1 < n ; i++)
        {
            int ans= nums[i+k-1] - nums[i];
            if(ans < mind)
                mind = ans;
        }
        return mind;
    }
    
};
