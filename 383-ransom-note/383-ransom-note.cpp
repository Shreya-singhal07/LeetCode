class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int>rsn;
        unordered_map<char,int>mag;
        
        for(int i = 0 ; i < magazine.length() ; i++)
        {
            mag[magazine[i]]++;
        }
        
        for(int i = 0 ; i < ransomNote.length() ; i++)
        {
            rsn[ransomNote[i]]++;
        }
        for(int i = 0 ; i < ransomNote.length() ; i++)
        {
            if(rsn[ransomNote[i]] > mag[ransomNote[i]]) //important
                return false;
        }
        return true;
        
    }
};