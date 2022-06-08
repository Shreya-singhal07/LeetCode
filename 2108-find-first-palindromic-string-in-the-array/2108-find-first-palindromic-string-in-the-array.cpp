class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        string x="";
        for(int i = 0 ; i < words.size() ; i++)
        {
            x= words[i];
            reverse(words[i].begin(),words[i].end());
            if(x == words[i])
            {
                return x;  
                break;
            }
            x="";
            
        }
        return x;
    }
};