class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        
        vector<int> avgs (nums.size(), -1);     
        vector<long long> pref (nums.size(), 0);
        
        if(2*k >= nums.size())
            return avgs;
        
        pref[0] = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            pref[i] = pref[i - 1] + nums[i];  
        }
        
    
        avgs[k] = pref[2*k] / (2*k + 1);
        int j = 0;
        for(int i = k + 1; i + k < nums.size() ; i++)
        {
            avgs[i] = (pref[i + k] - pref[j]) / (k*2 + 1);
            j++; 
        }        
        return avgs;
    }
};