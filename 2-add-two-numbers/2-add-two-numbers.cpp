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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=NULL;
        ListNode* head=NULL;
        int carry=0;
        while(l1 != NULL && l2 != NULL){
            int value=l1->val + l2->val + carry;
            carry=value/10;
            value%=10;
            
            ListNode* ansnode=new ListNode(value);
            
            if(head == NULL){
                head=ansnode;
                temp=head;
            }
            else{
                temp->next=ansnode;
                temp=ansnode;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
             int t=l1->val+carry;
             carry=t/10;
             t=t%10;
             ListNode * newnode =new ListNode(t);
             temp->next=newnode;
             temp=newnode;
             l1=l1->next;
        }
         while(l2!=NULL){
             int t=l2->val+carry;
             carry=t/10;
             t=t%10;
             ListNode * newnode =new ListNode(t);
             temp->next=newnode;
             temp=newnode;
             l2=l2->next;
        }
       if(carry !=0){
            ListNode * newnode =new ListNode(carry);
            temp->next=newnode;
            temp=newnode; 
       }
        return head;
    }
};