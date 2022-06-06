class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        unordered_set<char>s;
        int flag;
        char ch= 'a';
        for(int i=0;i<sentence.size();i++)
            s.insert(sentence[i]);
        for(int i=0;i<26;i++)
        {
            flag=0;
            if(s.find(ch)!=s.end())
                flag=1;
            if(flag==0)
                break;
            ch++;
        }
        return flag;
     
    }
};