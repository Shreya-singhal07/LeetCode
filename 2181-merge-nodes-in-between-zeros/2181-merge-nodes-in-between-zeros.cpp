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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* p1 = head;
        ListNode* p2 = head;
        ListNode* curr = head;
        int sum, c=0;
        while(curr != NULL) 
        {
            if(curr->val == 0)
            {
                sum=0;
                p2 = p2->next;
                while(p2->val !=0)
                {
                    sum += p2->val;
                    p2 = p2->next;
                }
                p1->val = sum;
                if(p2->next == NULL)
                    p1->next = NULL;
                else
                {
                    p1->next = p2;
                    p1=p2;
                }
            }   
            curr = curr->next;
        }
        return head; 
    }
};

