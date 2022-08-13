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
private:
    ListNode* len(ListNode* head){
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* temp){
        ListNode* cur=temp;
        ListNode* forward=NULL;
        ListNode* prev=NULL;
        
        while(cur!=NULL){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forward;
        }
        return prev;
    }
public:
    void reorderList(ListNode* head) {
        ListNode* slow=len(head);
        ListNode* p=reverse(slow->next);
        slow->next=NULL;
        ListNode* cur=head;

        while(p){
            ListNode* x=cur->next;
            ListNode* y=p->next;
            cur->next=p;
            p->next=x;
            cur=x;
            p=y;
        }
    }
};