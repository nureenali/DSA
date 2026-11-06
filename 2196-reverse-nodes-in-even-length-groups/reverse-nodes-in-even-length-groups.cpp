class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {

        ListNode* curr = head;
        int groupSize = 1;

        ListNode* prevGroup = nullptr;

        while (curr != nullptr) {

            ListNode* temp = curr;
            int count = 0;

            // Count actual nodes in this group
            while (temp != nullptr && count < groupSize) {
                temp = temp->next;
                count++;
            }

            // Reverse only if actual group length is even
            if (count % 2 == 0) {

                ListNode* prev = temp;
                ListNode* node = curr;

                for (int i = 0; i < count; i++) {
                    ListNode* nextNode = node->next;
                    node->next = prev;
                    prev = node;
                    node = nextNode;
                }

                if (prevGroup == nullptr) {
                    head = prev;
                } else {
                    prevGroup->next = prev;
                }

                prevGroup = curr;
                curr = temp;

            } else {

                for (int i = 0; i < count; i++) {
                    prevGroup = curr;
                    curr = curr->next;
                }
            }

            groupSize++;
        }

        return head;
    }
};