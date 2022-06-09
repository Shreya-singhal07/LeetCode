class Solution {
public:
    int minimumSum(int num) 
    {
        int x,y, i = 0;
        int arr[4];
        while(i < 4)
        {
            arr[i] = num % 10;
            num /= 10;
            i++;
        }
        sort(arr,arr+4);
        x = arr[0] * 10 + arr[3];
        y = arr[1] * 10 + arr[2];
        
        return x+y;
        
    }
};