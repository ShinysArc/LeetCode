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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode result(0);
        ListNode *current = &result;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int a = 0;
            int b = 0;
            if (l1)
                a = l1->val;
            if (l2)
                b = l2->val;
            
            auto sum = carry + a + b;
            current->next = new ListNode(sum % 10);
            carry = sum / 10;
            
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
            current = current->next;
        }

        return result.next;
    }
};