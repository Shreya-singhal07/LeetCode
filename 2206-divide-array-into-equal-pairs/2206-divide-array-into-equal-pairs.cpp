class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int p=0; //number of pairs
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2)
        {
            if(nums[i]==nums[i+1])
                p++;
        }
        if(p== n/2)
            return true;
        else
            return false;
    }
};