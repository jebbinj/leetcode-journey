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
// class Solution
// {
// public:
//     ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
//     {

//         ListNode *l1ptr{list1}, *l2ptr{list2};

//         if (!list1)
//             return list2;
//         if (!list2)
//             return list1;

//         ListNode *head{nullptr};

//         if (list1->val > list2->val)
//         {
//             head = list2;
//             list2 = list2->next;
//         }
//         else
//         {
//             head = list1;
//             list1 = list1->next;
//         }

//         ListNode *curr = head;
//         while (list1 && list2)
//         {
//             if (list1->val < list2->val)
//             {
//                 curr->next = list1;
//                 list1 = list1->next;
//             }
//             else
//             {
//                 curr->next = list2;
//                 list2 = list2->next;
//             }
//             curr = curr->next;
//         }

//         if (list1)
//         {
//             curr->next = list1;
//         }
//         else
//         {
//             curr->next = list2;
//         }

//         return head;
//     }
// };

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {

        ListNode *l1ptr{list1}, *l2ptr{list2};

        if (!list1)
            return list2;
        if (!list2)
            return list1;

        if (list1->val < list2->val)
        {

            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {

            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

// mergeTwoLists(1->3->5->7, 2->4->6->8)
// |
// |---> mergeTwoLists(3->5->7, 2->4->6->8)
// |     |
// |     |---> mergeTwoLists(3->5->7, 4->6->8)
// |           |
// |           |---> mergeTwoLists(3->5->7, 6->8)
// |                 |
// |                 |---> mergeTwoLists(5->7, 6->8)
// |                       |
// |                       |---> mergeTwoLists(5->7, 8)
// |                             |
// |                             |---> mergeTwoLists(7, 8)
// |                                   |
// |                                   |---> mergeTwoLists(nullptr, 8)
// |                                         |
// |                                         |---> 8
// |
// |---> 1->2->3->4->5->6->7->8

