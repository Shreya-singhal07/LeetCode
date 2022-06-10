/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode* temp;
    bool isPalindrome(ListNode* head) 
    {
         temp = head;
        if(check(head))
            return true;
        return false;
        
    }
    
    
    bool check(ListNode* p)
    {
        if(p == NULL)
            return true;
        bool x = check(p->next);
        bool y = x && (p->val == temp->val);
        temp = temp->next;
        return y;
        
    }
};