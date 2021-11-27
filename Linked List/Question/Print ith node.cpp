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

void printIthNode(Node *head, int i)
{
    //Write your code here
    Node *temp = head;
    int count = 0;
    while(temp != NULL && count < i){
        temp = temp->next;
        count++;
    }
    if(count == i and temp != NULL){
        cout<<temp->data;
    }
    /*
    or we could just use temp as because already the count must have been equal to i
    if( temp != NULL){
        cout<<temp->data;
    }
    */
    
}