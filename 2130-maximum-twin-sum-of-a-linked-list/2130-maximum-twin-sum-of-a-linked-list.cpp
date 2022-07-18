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
    int pairSum(ListNode* head) {
        ListNode *curr=head;
        vector<int>ans;
        while(curr){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        int i=0;
        int j=ans.size()-1;
        int maxi=INT_MIN;
        while(i<j){
            maxi=max(maxi,ans[i++]+ans[j--]);
        }
        return maxi;
    }
};