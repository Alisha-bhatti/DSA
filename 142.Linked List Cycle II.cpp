/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL; 
        
        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
           
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;     //if slow==fast in LL then put slow/fast to head then incremenet both by 1 untill they are at same position again and then return slow which is the starting point of the loop.
                while(slow!=fast){     // this means that the loop runs till slow is not equal to fast
                
                    slow=slow->next;
                    fast=fast->next;
                
                }
                return slow;
            }
        }
        return NULL;
    }
};
