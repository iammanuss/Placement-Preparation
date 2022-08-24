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
    int len(ListNode* head){
        ListNode* curr=head;
        int cnt=0;
        while(curr != NULL){
            cnt++;
            curr= curr->next;
        }
        return cnt;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int l=len(head);
        if(l < k) return head;
        ListNode* forward=NULL;
        ListNode* cur=head;
        ListNode* prev=NULL;
        int cnt=0;
        
        while(cur != NULL && cnt<k){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forward;
            cnt++;
        }
        if(forward != NULL){
            head->next = reverseKGroup(forward,k);
        }
        return prev;
    }
};