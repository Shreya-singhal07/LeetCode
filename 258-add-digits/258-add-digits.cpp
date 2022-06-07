class Solution 
{
public:
    int m,sum=0;
    int addDigits(int num) 
    { 
        if(num==0)
            return 0;
        int s=0;
        while(num>0)
        {
            m= num%10; //1
            s+=m;    //2
            num=num/10; //0
        }
        sum=s;
        if(sum>9)
        {
            addDigits(sum);
            
        }
        return sum;
    }
};