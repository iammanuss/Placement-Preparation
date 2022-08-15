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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur=head;
        ListNode* ans=NULL;
        ListNode* t=NULL;
        int sum=0;
        while(cur!=NULL){
            if(cur->val != 0){
                sum+=cur->val;
            }
            else{
                ListNode* temp=new ListNode(sum);
                if(ans == NULL){
                    ans=temp;
                    t=temp;
                } 
                else{
                    t->next = temp;
                    t=t->next;
                }
                sum=0;
            }
            cur=cur->next;
        }
        ans=ans->next;
        return ans;
    }
};