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
        while(cur!=NULL){
            forward=cur->next;
            cur->next=prev;
            prev=cur;
            cur=forward;
        }
        return prev;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL)  return l2;
        if(l2 == NULL)  return l1;
        if(l1 == NULL && l2 == NULL) return NULL;
        ListNode* t1=reverse(l1);
        ListNode* t2=reverse(l2);
        int carry=0;
        ListNode* head=NULL;
        ListNode* manu=NULL;
        while(t1 != NULL && t2 != NULL){
            int value=t1->val+t2->val+carry;
            carry=value/10;
            value%=10;
            ListNode* mansi=new ListNode(value);
            if(head == NULL){
                head=mansi;
                manu=head;
            }
            else{
                manu->next=mansi;
                manu=mansi;
            }
            t1=t1->next;
            t2=t2->next;
        }
        while(t1 != NULL){
            int value=t1->val + carry;
            carry=value/10;
            value%=10;
            ListNode* mansi=new ListNode(value);
            manu->next=mansi;
            manu=mansi;
            t1=t1->next;
        }
        while(t2 != NULL){
            int value=t2->val + carry;
            carry=value/10;
            value%=10;
            ListNode* mansi=new ListNode(value);
            manu->next=mansi;
            manu=mansi;
            t2=t2->next;
        }
        
        if(carry!=0){
            ListNode* mansi=new ListNode(carry);
            manu->next=mansi;
            manu=mansi;
        }
        manu->next=NULL;
        ListNode* manu_mansi=reverse(head);
        return manu_mansi;
    }
};