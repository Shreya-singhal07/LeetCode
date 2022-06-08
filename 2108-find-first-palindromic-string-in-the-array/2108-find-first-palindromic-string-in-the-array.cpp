class Solution {
public:
    bool reversecheck(string s)
    {
        int a = s.length();
        for(int j=0;j< a/2;j++)
        {
            if(s[j] !=s[a-j-1])
                return false;   
        }
        return true;
        
    }
    string firstPalindrome(vector<string>& words) 
    {
        string x = "";
        int c;
        for(int i = 0 ; i < words.size() ; i++)
        {
            x = words[i];
            c = reversecheck(words[i]);
            if(c == 1)
            {
                return x;  
                break;
            }
            x = "";
            
        }
        return x;
    }
};






// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) 
//     {
//         string x = "";
//         for(int i = 0 ; i < words.size() ; i++)
//         {
//             x = words[i];
//             reverse(words[i].begin(),words[i].end());
//             if(x == words[i])
//             {
//                 return x;  
//                 break;
//             }
//             x = "";
            
//         }
//         return x;
//     }
// };