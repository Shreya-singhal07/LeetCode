/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>v1;
    vector<int>v2;
    
    vector<int>ans;
  
    void solve(TreeNode* root)
    {
        if(root == NULL)
            return;
        if(root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->val);
        }
        else
        {
            solve(root->left);
            solve(root->right);
        }
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) 
    {
        v1.clear();
        v2.clear();
        ans.clear();
        solve(root1);
        v1 = ans;
        ans.clear();
        solve(root2);
        v2 = ans;
        if(v1 == v2)
            return true;
        else
            return false;
    }
};