class Solution 
{
public:
    int sum=0;
    int addDigits(int num) 
    { 
        if(num == 0)
            return 0;
        int s = 0;
        while(num > 0)
        { 
            s += (num % 10);  
            num = num / 10; 
        }
        sum = s;
        if(sum >= 10)
        {
            addDigits(sum);
            
        }
        return sum;
    }
};

/*   EASY WAY

class Solution {
public:
    int condense(int num)
    {
        int sm = 0;
        while(num)
        {
            sm += (num % 10);
            num = num / 10;
        }
        
        return sm;
    }
    
    int addDigits(int num) 
    {
        
        while(num >= 10)
        {
            num = condense(num);
        }
    
        return num;
    }
};
*/