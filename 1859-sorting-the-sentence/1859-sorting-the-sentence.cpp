class Solution {
public:
    string sortSentence(string s) 
    {
        vector<string>ans;
        vector<string>words;
        string temp;
        string res= "";
        int pos;
        s = s + " ";
        for(int i = 0 ; i < s.length() ; i++)
        {
            temp = "";
            while(s[i] != ' ')
            {
                temp += s[i];
                i++;
            }
            words.push_back(temp);
        }
        int m = words.size();
        ans.resize(m);
        
        for(auto& w:words)
        {
            pos =  (w.back()-'0') -1;
            w.pop_back();
            ans[pos] = w;
        }
        
        for(auto& a: ans)
        {
            res = res + a;
            res += " ";
        }
        res.pop_back();
        return res;
        
    }
};
