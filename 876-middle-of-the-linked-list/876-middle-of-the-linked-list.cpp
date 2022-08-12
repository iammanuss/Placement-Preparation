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
        ListNode* cur=head;
        int cnt=0;
        while(cur!=NULL){
            cur=cur->next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        int l=len(head);
        l=l/2;
        ListNode* cur=head;
        
        while(l--){
            cur=cur->next;
        }
        head=cur;
        return head;
    }
};