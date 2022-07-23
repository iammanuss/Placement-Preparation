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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)  return NULL;
        ListNode *temp=head;
        vector<int>v,ans;
        while(temp!=NULL){
            v.push_back(temp->val);
            temp=temp->next;
        }
        k=k%v.size();
        reverse(v.begin(),v.end());
        reverse(v.begin(),v.begin()+k);
        reverse(v.begin()+k,v.end());
        ListNode *res=head;
        if(v.size()==1){
            res->val=v[0];
            res->next=NULL;
            return head;
        }
        
        int i=0;
        while(res!=NULL){
            res->val=v[i];
            res=res->next;
            i++;
        }
        return head; 
    }
};