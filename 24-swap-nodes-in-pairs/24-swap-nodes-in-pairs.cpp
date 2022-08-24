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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL) return NULL;
        if(head->next == NULL) return head;
        ListNode* prev=new ListNode(-1);
        ListNode* cur=head;
        while(cur != NULL && cur->next != NULL){
            prev->next = cur->next;
            cur->next = cur->next->next;
            prev->next->next = cur;
            if(cur == head) head = prev->next;
            prev= cur;
            cur=cur->next;
            
        }
        return head;
    }
};