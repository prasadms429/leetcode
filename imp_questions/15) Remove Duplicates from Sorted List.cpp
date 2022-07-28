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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr)   // If linked list is empty.
        {
            return head;
        }
        ListNode* p=head;
        ListNode* q=head->next;
        while(q!=nullptr)
        {
            if(p->val!=q->val){
                p=q;
                q=q->next;
            }
            else{
                p->next=q->next;
                delete(q);
                q=p->next;  // q is assigned with p->next, not with q-next, because in previous line of code q value is deleted. Now to q we assign p->next. 
            }               //Now q is p->next and we dont move 'p' to next value because, we should compare p-value, with next q-value, (because, sometime there are 3 consecutive  values are same ), 
        }                   //if p->val and q->val are not equal then we move 'p' pointer to next node using 'if' block code.
        return head;
    }
};


/*
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,1,2]
Output: [1,2]
Example 2:


Input: head = [1,1,2,3,3]
Output: [1,2,3]
 

Constraints:

The number of nodes in the list is in the range [0, 300].
-100 <= Node.val <= 100
The list is guaranteed to be sorted in ascending order.
*/
