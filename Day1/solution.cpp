class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            //  head to simplify the code
        ListNode* Head = new ListNode(0);
        ListNode* current = Head;
        int carry = 0;