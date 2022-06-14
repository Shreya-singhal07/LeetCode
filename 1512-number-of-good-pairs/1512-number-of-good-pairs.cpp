class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int goodpairs=0 , n = nums.size();
        pair<int,int>m[n];
        for(int i=0 , j=0 ; i<n-1 ; i++)
        {
            j=i+1;
            while(j<n)
            {
                if(nums[i] == nums[j])
                {
                    m[i] = {i,j};
                    goodpairs++;
                }  
                j++;
            }
        }
       
        return goodpairs ;
    }
};