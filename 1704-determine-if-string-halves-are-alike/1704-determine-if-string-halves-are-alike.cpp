class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int n = s.length();
        string a,b;
        unordered_set<char>v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        int x=0,y=0;
        for(int i = 0 ; i < n/2 ; i++)
            a += s[i];
        for(int i = n/2 ; i < n ; i++)
            b += s[i];
        int k=0;
        while(k< n/2)
        {
            if(v.find(a[k]) !=  v.end())
                x++;
            if(v.find(b[k]) !=  v.end())
                y++;
            k++;
        }
        if(x==y)
            return true;
        else
            return false;
    }
};