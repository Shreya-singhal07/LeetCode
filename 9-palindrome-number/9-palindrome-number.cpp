class Solution {
public:
    bool isPalindrome(int x) 
    {
        if(x < 0)
            return false;
        long long int y = 0, z;
        z = x;
        while(z != 0)
        {
            y = y*10 + z % 10;
            z /= 10;
        }
        if(x == y)
            return true;
        return false;
        
    }
};