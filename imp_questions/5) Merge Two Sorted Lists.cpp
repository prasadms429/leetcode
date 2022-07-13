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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head;     // create head pointer to hold, address of first node to return.
        ListNode *Last;     // This is for storing, traversing and for creating sorted merge list.
        if(list1==NULL){        // If first list is empty, then write second list as it is.
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if(list1->val < list2->val){    // If first node value is less than second node value, then do this. This 'if else' code is for finding first node to point to the head and 'while' code is for all other nodes. 
            head=Last=list1;
            list1=list1->next;       // After finding less value, move pointer to next node, for comparing other values.
            head->next=NULL;        // To hold the address of first node.
        }
        else
        {
            head=Last=list2;
            list2=list2->next;
            head->next=NULL;
        }
        
        while(list1 && list2)   // This while loop executes till either list1 or list2 become null, because for some list, after one list becomes empty, 
        {                       // then other list may contains further nodes, to point that remaining nodes as it is (because that are sorted ) we use 'if' statement code below while loop.
            if(list1->val < list2->val){    // If list1 node value less than list2 node value.
                Last->next=list1;       // To do link between Last node of merged list and current node of list1.
                Last=list1;             // then we move Last pointer to list1 node that is linked to merged list as current last node.
                list1=list1->next;      // after that we move list1 pointer to next node, for comparing node values between two lists.
                Last->next=NULL;        // Then we make current last node pointer to point to null.
            }
            else{
                Last->next=list2;
                Last=list2;
                list2=list2->next;
                Last->next=NULL;
            }
        }
        
        if(list1){                  // If list1 is not pointing to null and list1 values are still there, then point next pointer of last node to list1.
            Last->next=list1;
        }
        if(list2){
            Last->next=list2;
        }
        
        return head;
        
    }
};


/* Question -
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]
 

Constraints:

The number of nodes in both lists is in the range [0, 50].
-100 <= Node.val <= 100
Both list1 and list2 are sorted in non-decreasing order.
*/
