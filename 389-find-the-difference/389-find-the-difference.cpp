class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        
        int a = s.length();
        int b = t.length();
        if(a == 0)
            return t[0];
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i=0 ; i<a ;i++)
        {
            if(s[i] != t[i])
                return t[i];
        }  
         return t[b-1];   
    }
};