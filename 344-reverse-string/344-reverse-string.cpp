class Solution {
public:
    
    void reverseString(vector<char>& s) 
    {
        int n = s.size()-1;
        int i=0;
        char temp;
        while(i < (n/2)+1)
        {
            temp = s[i];
            s[i] = s[n-i];
            s[n-i] = temp;
            i++;
        }
                    
    }
};