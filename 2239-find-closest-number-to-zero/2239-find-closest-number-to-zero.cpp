class Solution {
public:
    int findClosestNumber(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n , p = 0;
        vector<int>pos;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            if(nums[i] == 0)
                return 0;
            if(nums[i] < 0)
                n = nums[i];
            else
            {
                pos.push_back(nums[i]);
                p++;
            }
        }
       
        if( p == 0 || abs(n) < pos.front() && n!=0)
            return n;
        return pos.front();
    }
};