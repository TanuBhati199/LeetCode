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
private:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* ptr = head;
        while (ptr != NULL && ptr->next != NULL) {
            int res = gcd(ptr->val, ptr->next->val);
            ListNode* gcdNode = new ListNode(res);
            gcdNode->next = ptr->next;
            ptr->next = gcdNode;
            ptr = gcdNode->next;
        }

        return head;
    }
};
