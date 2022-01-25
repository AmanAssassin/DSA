/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    // Write your code here
    Node *result = new Node(0);
    Node *curr = result;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            curr->next = head1;
            head1 = head1->next;
        }
        else
        {
            curr->next = head2;
            head2 = head2->next;
        }
        curr = curr->next;
    }
    if (head1 != NULL)
    {
        curr->next = head1;
    }
    else
    {
        curr->next = head2;
    }
    Node *newHead = result->next;
    delete result;
    return newHead;
}