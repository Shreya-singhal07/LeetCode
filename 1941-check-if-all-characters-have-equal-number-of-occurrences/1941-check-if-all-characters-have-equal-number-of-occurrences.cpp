class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        
        unordered_map<char,int>m;
        for(int i = 0 ; i < s.length() ; i++)
        {
            m[s[i]]++;
        }
        
       int k= m[s[0]];
        
        for(auto e : m)
        {
            if(e.second != k )
                return false;
        }
        return true;
    }
};