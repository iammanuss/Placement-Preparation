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
    long long len(ListNode* head){
        long long cnt=0;
        ListNode* cur=head;
        while(cur!=NULL){
            cur=cur->next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL)  
            return head;
        if(head->next == NULL){
            head=NULL;
            return head;
        }
        long long l=len(head);    
        l/=2;
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(l--){
            prev=cur;
            cur=cur->next;
        }
        prev->next=cur->next;
        cur=NULL;
        delete cur;
        return head;
    }
};