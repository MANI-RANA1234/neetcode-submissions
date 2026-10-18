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
    ListNode* reverseList(ListNode* head) {

        // 1. Initialize pointers
        ListNode* prev = nullptr;
        ListNode* curr = head;

        // 2. Traverse the linked list
        while (curr !=nullptr) {

            // 3. Save the next node
            ListNode* nextNode = curr->next;

            // 4. Reverse the current pointer
            curr->next=prev;

            // 5. Move prev forward
            prev = curr;

            // 6. Move curr forward
            curr = nextNode;
        }

        // 7. Return the new head
        return prev;
    }
};