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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return NULL;
        ListNode* evenhead=new ListNode(-1);
        ListNode* oddhead=head;
        ListNode* temp=head->next;
        ListNode* even=evenhead;
        ListNode* odd=oddhead;
        int idx=2;   //form 2 bcoz 1 is already considered.
        while(temp){
            if(idx%2==0){
                even->next=temp;
                temp=temp->next;
                even=even->next;
            }
            else{
                odd->next=temp;
                temp=temp->next;
                odd=odd->next;
            }
            idx++;
        }
        odd->next=evenhead->next;
        even->next=NULL;
        return oddhead;
        

    }
};
