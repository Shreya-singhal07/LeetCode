class Solution 
{
public:
    string truncateSentence(string &s, int k) 
    {
        s = s + ' '; //best approach
        string ans = "";
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ')
            {
                k--;
                if(k == 0)
                    break;
            }
            ans = ans + s[i];
        }
 
        return ans;
    }
};