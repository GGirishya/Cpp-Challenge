class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            //  head to simplify the code
        ListNode* Head = new ListNode(0);
        ListNode* current = Head;
        int carry = 0;
             // Traverse both linked lists
        while (l1 != nullptr || l2 != nullptr) {
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;
            int sum = carry + x + y;
            // Update carry for the next iteration
        carry = sum / 10;
