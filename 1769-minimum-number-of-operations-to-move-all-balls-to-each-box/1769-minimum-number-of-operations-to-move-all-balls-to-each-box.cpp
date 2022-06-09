class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
        int sum;
        vector<int>ans;
        int n= boxes.length();
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=0;j<n;j++)
            {
                if((j<n && i==j) || boxes[j]=='0') 
                    j++;
                if(boxes[j]=='1')
                    sum+= abs(j-i);
            }
            ans.push_back(sum);
        }
      return ans;  
    }
};