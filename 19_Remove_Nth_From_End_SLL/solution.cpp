/**
 * Definition for singly-linked list.
 * struct ListNode
{
    *int val;
    *ListNode *next;
    *ListNode() : val(0), next(nullptr){} * ListNode(int x) : val(x), next(nullptr){} * ListNode(int x, ListNode *next) : val(x), next(next){}
                                                                                                                                      *
};
*/
// class Solution
// {
// public:
//     ListNode *removeNthFromEnd(ListNode *head, int n)
//     {

//         int size{0};
//         ListNode *localHead = head;

//         while (localHead != nullptr)
//         {
//             localHead = localHead->next;
//             ++size;
//         }

//         if (size == n)
//         {
//             ListNode *newHead = head->next;
//             delete head;
//             return newHead;
//         }

//         localHead = head;

//         for (auto i = 1; i < size - n; ++i)
//         {
//             localHead = localHead->next;
//         }

//         ListNode *nodeToRemove = localHead->next;
//         localHead->next = nodeToRemove->next;
//         delete nodeToRemove;

//         return head;
//     }
// };

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode dummy(0, head), *fast = &dummy, *slow = &dummy;

        for (auto i = 0; i <= n; ++i)
            fast = fast->next;

        while (fast != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }

        ListNode *temp = slow->next;
        slow->next = temp->next;

        delete temp;
        return dummy.next;
    }
};