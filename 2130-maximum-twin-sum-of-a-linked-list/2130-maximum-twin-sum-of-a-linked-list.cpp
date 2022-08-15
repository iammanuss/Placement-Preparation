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
    ListNode* reverse(ListNode* head){
        ListNode* cur=head;
        ListNode* prev=NULL;
        ListNode* forward=NULL;
        while(cur != NULL){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forward;
        }
        return prev;
    }
    ListNode* mid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }

public:
    int pairSum(ListNode* head) {
        ListNode* m=mid(head);
        ListNode* rev=reverse(m);
        ListNode* p=NULL;
        ListNode* cur=head;
        while(cur!=m){
            p=cur;
            cur=cur->next;
        }
        p->next=NULL;
        cur=head;
        int maxi=0;
        while(cur!=NULL){
            int temp=rev->val+cur->val;
            maxi=max(maxi,temp);
            rev=rev->next;
            cur=cur->next;
        }
        return maxi;
    }
};