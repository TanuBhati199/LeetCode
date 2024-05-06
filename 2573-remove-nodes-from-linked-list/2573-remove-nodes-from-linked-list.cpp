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
    ListNode* removeNodes(ListNode* head) {
        ListNode* l1=head;
        stack<ListNode*>myst;
        while(l1!=nullptr){
        while(!myst.empty() && myst.top()->val<l1->val){
            myst.pop();
        }
        myst.push(l1);
        l1=l1->next;
        }
        ListNode *nel=nullptr; 
        while(!myst.empty()){
        l1=myst.top();
        myst.pop();
        l1->next=nel;
        nel=l1;
        }

        return l1;
    }
};