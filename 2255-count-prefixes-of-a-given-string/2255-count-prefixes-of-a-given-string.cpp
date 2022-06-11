class Solution {
public:
    int countPrefixes(vector<string>& words, string s) 
    {
        unordered_set<string>m;
        string temp = "";
        int count = 0;
        for(int i = 0 ; i < s.length() ; i++)
        {
            temp += s[i];
            m.insert(temp);
        }
        for(int i = 0 ; i < words.size() ; i++)
        {
            if(m.find(words[i]) != m.end())
                count++;
        }
        return count;
    }
};