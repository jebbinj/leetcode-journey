/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {

        if (head == nullptr)
            return false;

        if (head->next == nullptr)
            return false;

        if (head->next->next == nullptr)
            return false;

        ListNode *slow(head), *fast(head->next->next);

        while (slow != nullptr && fast != nullptr)
        {
            if (slow == fast)
                return true;

            slow = slow->next;
            fast = fast->next == nullptr ? nullptr : fast->next->next;
        }

        return false;
    }
};