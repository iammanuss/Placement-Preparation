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
        stack<ListNode*>st;
        ListNode* cur=head;
        while(cur!=NULL){
            st.push(cur);
            cur=cur->next;
        }
        int len=st.size()/2;
        cur=head;
        ListNode* t=NULL;
        while(len--){
            t=cur->next;
            cur->next=st.top();
            cur=cur->next;
            cur->next=t;
            cur=cur->next;
            st.pop();
        }
        cur->next=NULL;
    }
};