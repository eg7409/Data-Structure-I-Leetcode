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
        
        if(head == NULL){
            return NULL;
        }
        
        ListNode * curr = head,*fast=head;
        int last;
        
        while(curr!=NULL){
            last = curr->val;
                
            while(fast!=NULL){
                if(fast->val == last){
                    fast = fast->next;
                }
                else{
                    break;
                }
            }
            
            curr->next = fast;
            curr = curr->next;
        }
        
       return head;
    }
};
