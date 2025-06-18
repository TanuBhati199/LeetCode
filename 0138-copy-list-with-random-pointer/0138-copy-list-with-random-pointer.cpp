/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node *temp=head;
        unordered_map<Node*, Node*>hashMap;
    while(temp){
        hashMap[temp]=new Node(temp->val);
        temp=temp->next;
        }
        temp=head;
        while(temp){
            Node* copy=hashMap[temp];
            copy->next=hashMap[temp->next];
            copy->random=hashMap[temp->random];
            temp=temp->next;
        }
   return hashMap[head];
    }
};