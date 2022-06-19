class Solution {
public:
    int romanToInt(string s) 
    {
        int i= s.size()-1;
        int sum = 0;
        unordered_map<char,int>m;
        m['I']= 1;
        m['V']= 5;
        m['X']= 10;
        m['L']= 50;
        m['C']= 100;
        m['D']= 500;
        m['M']= 1000; 
        
        while(i>=0)
        {
            if(i>0 && m[s[i]] > m[s[i-1]])
            {
                sum += (m[s[i]] - m[s[i-1]]);
                i--;
            }
            else
                sum += m[s[i]];
            i--;
        }
    return sum;
    }
};