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

int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return 1 + length(head->next);
}

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    int len = length(head);
    if (n >= len || n <= 0)
    {
        return head;
    }
    Node *temp = head;
    int i = 0;
    while (temp != NULL && i < len - n - 1)
    {
        temp = temp->next; 
        i++;
    }
    if (temp != NULL)
    {
        Node *newHead = temp->next;
        temp->next = NULL;
        temp = newHead;
        while (temp != NULL && temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = head;
        head = newHead;
        return head;
    }
    return NULL;
}