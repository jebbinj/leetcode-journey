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
class Solution
{
private:
    bool recursivePalindrome(ListNode *&head, ListNode *tracker)
    {
        if (tracker == nullptr)
        {
            return true;
        }
        bool isPalin = recursivePalindrome(head, tracker->next);
        if (!isPalin || head->val != tracker->val)
        {
            return false;
        }
        head = head->next;
        return isPalin;
    }

public:
    bool isPalindrome(ListNode *head)
    {

        return recursivePalindrome(head, head);
    }
};