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

Node *reverse(Node *head)
{
    //Write your code here

    Node *previous = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;

        previous = current;
        current = next;
    }

    //previous is new head

    head = previous;
    return head;
}

// Node *middle(Node*head){
//     Node *slow = head;
//     Node *fast = head;
//     while(fast != NULL && fast->next != NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     return slow;

// }
bool isPalindrome(Node *head)
{
    //Write your code here

    //     if(head == NULL ||head->next!=NULL){
    //         return true;
    //     }
    //     Node *mid = middle(head);
    //     Node *last = Reverse(mid->next);

    //     Node *cur = head;

    //     while(last != NULL){
    //         if(last->data != cur->data){
    //             return false;
    //         }
    //         last = last->next;
    //         cur = cur->next;
    //     }
    //     return true;

    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    Node *slow = head;
    Node *fast = head;
    Node *previous = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        previous = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    previous->next = NULL;
    Node *reverseHead = reverse(slow);
    Node *temp1 = head;
    Node *temp2 = reverseHead;
    while (temp1 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return true;
}