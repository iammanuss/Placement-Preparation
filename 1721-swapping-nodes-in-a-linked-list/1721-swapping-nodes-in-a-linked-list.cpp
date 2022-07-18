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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *cur=head;
        ListNode *curr=head;
        vector<int>v;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
        }
        int n=v.size();
        swap(v[k-1],v[n-k]);
        int i=0;
        while(curr!=NULL){
            curr->val=v[i];
            i++;
            curr=curr->next;
        }
        return head;
    } 
};