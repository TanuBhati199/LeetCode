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
       ListNode* shortdummy=new ListNode(0);
       ListNode* greatdummy=new ListNode(0);
       
       ListNode* shortd=shortdummy;
       ListNode* great=greatdummy;
       while(head){
        if(head->val<x){
            shortd->next=head;
            shortd=shortd->next;
        }
        else{
            great->next=head;
            great=great->next;
        }
        head=head->next;
       }
       great->next=nullptr;
       shortd->next=greatdummy->next;
       ListNode* ans=shortdummy->next;
       delete shortdummy;
       delete greatdummy;
       return ans;

       /*ListNode* temp=head;
       ListNode* dummy=new ListNode(0);
       ListNode* res=dummy;
       while(temp){
        if(temp->val<x){
         res->next=temp;
         res=res->next;
        }
        temp=temp->next;
       } 
       temp=head;
       while(temp){
        if(temp->val>=x){
            res->next=temp;
            res=res->next;
        }
        temp=temp->next;
       }
       res->next=nullptr;
       ListNode* newHead=dummy->next;
       delete dummy;
       return newHead;*/
    }
};