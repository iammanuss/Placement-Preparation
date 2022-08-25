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
        ListNode* curr=head;
        ListNode* forward=NULL;
        ListNode* prev=NULL;
        
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* curr = head;
        int i=1;
        while(i<k){
            curr=curr->next;
            i++;
        }
        ListNode* rev=reverse(head);
        ListNode* p=rev;
        i=1;
        while(i<k){
            rev=rev->next;
            i++;
        }
        int temp=curr->val;
        curr->val=rev->val;
        rev->val=temp;
        ListNode* q=reverse(p);
        return q;
    }
};