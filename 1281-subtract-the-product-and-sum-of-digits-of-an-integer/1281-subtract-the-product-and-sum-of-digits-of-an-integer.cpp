class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int m,s=0,x=1;
        while(n>0)
        {
            m = n % 10;
            s = s + m;
            x = x * m;
            n = n / 10;
        }
        return (x-s);
    }
};