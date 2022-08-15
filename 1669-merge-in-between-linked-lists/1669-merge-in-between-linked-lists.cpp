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
    ListNode* mergeInBetween(ListNode* l1, int a, int b, ListNode* l2) {
        ListNode* forward=NULL;
        ListNode* cur=l1;
        int i=1;
        while(cur!=NULL){
            if(a == i){
                forward=cur->next;
                cur->next=l2;
                break;
            }
            i++;
            cur=cur->next;
        }
        int cnt=b-a+1;
        while(cnt--){
            forward=forward->next;
        }
        ListNode* c=NULL;
        while(cur!=NULL){
            c=cur;
            cur=cur->next;
        }
        c->next=forward;
        return l1;
    }
};