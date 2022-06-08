class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int ans=0; //max count of words in a sentence
        int v=sentences.size(); //size of vector= number of sentences 
        for(int i=0;i<v;i++)
        {
            int count=0;
            for(int j=0;j<sentences[i].size();j++) //sentences[i].size()= length of sentence
            {
                if(sentences[i][j]==' ')
                    count++;
            }
            ans=max(ans,count);
        }
        return ++ans;        
    }
};


// ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
//count= 4,3,5
//ans= 5,4,6
