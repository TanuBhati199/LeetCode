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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // Step 1: Count total number of nodes
        ListNode* temp = head;
        int total = 1;
        while (temp->next) {
            temp = temp->next;
            total++;
        }

        // Step 2: Form a circular linked list
        temp->next = head; // make it circular

        // Step 3: Find the new tail (total - k % total - 1) and new head
        k = k % total;
        int stepsToNewHead = total - k;
        temp = head;
        for (int i = 0; i < stepsToNewHead - 1; i++) {
            temp = temp->next;
        }

        // Step 4: Break the circle and set new head
        ListNode* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }
};
