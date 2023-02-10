/*
    Linked list ADT used for exercise 2.
    This ADT only contains functions required by 
    exercise 2 and is not a fully-fledged Linked List.
*/

using namespace std;

class Node
{
    public:
    int data;
    struct Node *next;
};

/*
    Returns true if elem present in List.
    Returns false otherwise.
*/
bool checkDuplicate ( struct Node** head; int elem)
{
    struct Node *curr = head;
    while ( curr != NULL && curr->data <= elem )
    {
        if ( curr->data == elem )
            return true;
        curr = curr->next;
    }

    return false;
}

/*
    Inserts elements in ascending order.
*/
void insert ( struct Node** head, int node_data )
{
    // if data to insert isn't already present in List
    if ( !checkDuplicate( head, node_data ) )
    {
        struct Node *curr = head;

        while ( curr!= NULL && curr->data < node_data )
            curr = curr->next;

        struct Node* toInsert = new Node;


    }

}