class Solution {
public:
    bool isPalindrome(string s) 
    {
        string temp = "";
        for(int i = 0 ; i < s.length() ; i++)
        {
            while(isalnum(s[i]))
            {
                if(isupper(s[i]))
                    s[i]= tolower(s[i]);
                temp += s[i];
                i++;
            }
        }
        int n = temp.length();
        for(int i = 0 ; i < n/2 ; i++)
        {
            if(temp[i] != temp[n-i-1])
                return false;
        }
        return true;
    }
};