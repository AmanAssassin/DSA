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

Node *removeDuplicates(Node *head)
{
    //Write your code here
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *ans = removeDuplicates(head->next);
    if (head->data == ans->data)
    {
        return ans;
    }
    head->next = ans;
    return head;
}