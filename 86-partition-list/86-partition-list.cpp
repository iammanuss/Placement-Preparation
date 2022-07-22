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
    ListNode* partition(ListNode* head, int x) {
        ListNode* l1=new ListNode(0);
	    ListNode* l2=new ListNode(0);
	    ListNode* p1=l1;
	    ListNode* p2=l2;
        
	    while(head){
		    if(head->val<x) {
			    p1->next=head;
			    p1=p1->next;
		    }
		    else {
			    p2->next=head;
			    p2=p2->next;
		    }
		    head=head->next;
	    }
	    p1->next=l2->next;
	    p2->next=NULL;
	    return l1->next;
    }
};