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
            
            // Create a new node with the digit value (sum % 10) and append it to the result list
            current->next = new ListNode(sum % 10);
            current = current->next;
            // Move to the next nodes in l1 and l2
                if (l1 != nullptr) l1 = l1->next;
                if (l2 != nullptr) l2 = l2->next;
            }
        // Check if there's any remaining carry to add as a new node
        if (carry > 0) {
            current->next = new ListNode(carry);
        }

