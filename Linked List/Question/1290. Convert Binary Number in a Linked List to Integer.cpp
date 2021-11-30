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
ListNode *Reverse(ListNode *head)
{
    // Write your code here

    ListNode *previous = NULL;
    ListNode *current = head;
    ListNode *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    // previous is new head

    ListNode *temp = previous;
    return temp;
}

class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {

        int ans = 0;
        // ListNode *temp = head;
        ListNode *temp = Reverse(head);

        int i = 0;
        while (temp != NULL)
        {
            ans = ans + (temp->val) * (pow(2, i));
            i++;
            temp = temp->next;
        }
        return ans;
    }
};