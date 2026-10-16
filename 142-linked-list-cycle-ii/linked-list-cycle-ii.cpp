/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {

        ListNode* p = head;
        ListNode* q = head;

        // Step 1: Detect whether a cycle exists
        while (q != nullptr && q->next != nullptr) {
            p = p->next;
            q = q->next->next;

            if (p == q) {
                // Step 2: Find the starting node of the cycle
                p = head;

                while (p != q) {
                    p = p->next;
                    q = q->next;
                }

                return p;
            }
        }

        return nullptr;
    }
};