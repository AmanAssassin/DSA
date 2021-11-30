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

void printReverse(Node *head)
{
    //Write your code here

    Node *previous = NULL;
    Node *current = head;
    Node *next;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    //previous is new head

    Node *temp = previous;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}