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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL) return head;
        ListNode *cur=head,*curr=head;
        vector<int>v;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
        }
        for(int i=0;i<v.size()-1;i+=2){
            swap(v[i],v[i+1]);
        }
        int i=0;
        while(curr!=NULL){
            curr->val=v[i];
            i++;
            curr=curr->next;
        }
        return head;
    }
};