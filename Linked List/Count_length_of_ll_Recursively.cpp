
int length(Node *head)
{
    // Write your code here
    if (head == NULL)
    {
        return 0;
    }
    else
    {
        return length(head->next) + 1;
    }
}