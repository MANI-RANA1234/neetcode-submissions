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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head;
        ListNode* fast = head;

        // Move fast n steps ahead
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }

        // If fast is nullptr, remove the head
        if (fast == nullptr) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }

        // Move both pointers until fast reaches the last node
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        // Remove the target node
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        return head;
    }
};
