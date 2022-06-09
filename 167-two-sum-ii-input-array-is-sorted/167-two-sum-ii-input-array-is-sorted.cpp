class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int>ans;
        int n = numbers.size();
        int i = 0; 
        int j = n-1;
        while(i<j)
        {
            if(numbers[i] + numbers[j] == target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i] + numbers[j] < target) 
                i++;
            else 
                j--;
            
        }
        return ans;
    }
};



// LOGIC CORRECT
// TLE : O(N^2) TC

//     vector<int> twoSum(vector<int>& numbers, int target) 
//     {
//         vector<int>ans;
//         int n = numbers.size();
//         for(int i = 0 ; i < n-1 ; i++)
//         {
//             for(int j = i+1 ; j < n ; j++)
//             {
//                 if(numbers[i] + numbers[j] == target)
//                 {
//                     ans.push_back(i+1);
//                     ans.push_back(j+1);
//                     return ans;
//                 }
//             }
//         }
//         return ans;
//     }
