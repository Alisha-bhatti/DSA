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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int len = 1;
        // length of ll
        ListNode* temp = head;
        while(temp->next){
            len++;
            temp=temp->next;
        }
        if(k%len == 0) return head; // no need to rotate
        // make circular ll and traverse to the tail node
        temp->next = head;
        int steps =  len - k%len ;
        while(steps>0){
            temp=temp->next;
            steps--;
        }
        // break link and correct head position
        head = temp->next;
        temp->next = NULL;
        return head;

    }
};
