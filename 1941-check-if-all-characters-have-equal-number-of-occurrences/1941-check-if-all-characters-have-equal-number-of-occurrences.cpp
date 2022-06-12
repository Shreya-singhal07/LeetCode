class Solution {
public:
    bool areOccurrencesEqual(string s) 
    {
        int k=0;
        unordered_map<char,int>m;
        for(int i = 0 ; i < s.length() ; i++)
        {
            m[s[i]]++;
        }
        
        for(auto e : m)
            k= e.second;
        
        for(auto e : m)
        {
            if(e.second != k )
                return false;
        }
        return true;
    }
};