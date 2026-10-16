class Solution {
public:
    ListNode* partition(ListNode* head, int x) {

        ListNode smallDummy(0);
        ListNode bigDummy(0);

        ListNode* small = &smallDummy;
        ListNode* big = &bigDummy;

        ListNode* curr = head;

        while (curr != nullptr) {
            if (curr->val < x) {
                small->next = curr;
                small = curr;
            } else {
                big->next = curr;
                big = curr;
            }

            curr = curr->next;
        }

        big->next = nullptr;
        small->next = bigDummy.next;

        return smallDummy.next;
    }
};
