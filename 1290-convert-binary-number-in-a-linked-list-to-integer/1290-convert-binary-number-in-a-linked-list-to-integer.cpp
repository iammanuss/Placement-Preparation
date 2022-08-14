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
public:
    int getDecimalValue(ListNode* head) {
        ListNode* manu_ki_mansi=reverse(head);
        int ans=0;
        int i=0;
        while(manu_ki_mansi!=NULL){
            ans+=pow(2,i++)*manu_ki_mansi->val;
            manu_ki_mansi=manu_ki_mansi->next;
        }
        return ans;
        
    }
};