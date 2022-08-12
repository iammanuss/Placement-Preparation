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
    void reorderList(ListNode* head) {
        stack<ListNode*>s;
        ListNode* cur=head;
        while(cur!=NULL){
            s.push(cur);
            cur=cur->next;
        }
        ListNode* c=head;
        int size=s.size()/2;
        while(size--){
            ListNode* t=s.top();
            t->next=c->next;
            c->next=t;
            c=c->next->next;
            s.pop();
        }
        c->next=NULL;
    }
};