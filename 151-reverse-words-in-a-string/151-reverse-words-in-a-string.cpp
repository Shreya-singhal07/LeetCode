class Solution {
public:
    string reverseWords(string s) 
    {
        vector<string>t;
        s += " ";
        string ans;
        string temp ="";
        for(int i = 0; i< s.size(); i++)
        {
            temp+= s[i];
            if(s[i]== ' ')
            {
                if(temp != " ")
                    t.push_back(temp);
                temp = "";
            }
        }
        for(int i = t.size()-1 ; i>=0 ; i--)
        {
            ans += t[i];
        }
        ans.pop_back();
        return ans;
        
    }
};