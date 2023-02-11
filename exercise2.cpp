/*
Zain Mobhani
02/09/2023
GTRI Assessment
*/

#include <iostream>
#include <string>

// prototypes
bool checkDuplicate ( struct Node** head, int elem );
void insertNode ( struct Node** head, int node_data );
void printList ( struct Node** head );
void deleteList ( struct Node** head );

using namespace std;

class Node
{
    public:
    int data;
    struct Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

};


int main ( int argc, char *argv[] )
{
    if ( argc > 1 )
    {
        struct Node *head = new Node();
        // takes CLI args and inserts into array
        for ( int i = 1; i < argc; ++i )
        {
            insertNode( &head, atoi(argv[i] ));
        }

        printList( &head );

        deleteList( &head );
        
        return 0;
    }

    cout << "Input error." << endl;
    return -1;
}


/*
    Returns true if elem present in List.
    Returns false otherwise.
*/
bool checkDuplicate ( struct Node** head, int elem )
{
    struct Node *curr = *head;
    while ( curr != NULL )
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
void insertNode ( struct Node** head, int node_data )
{
    // if data to insert isn't already present in List
    if ( !checkDuplicate( head, node_data ) )
    {
        struct Node *curr = *head;
        // traverses List to insertion point
        while ( curr!= NULL && curr-> next != NULL && curr->next->data < node_data )
            curr = curr->next;
        // inserts Node
        struct Node* toInsert = new Node(node_data);
        toInsert->next = curr->next;
        curr->next = toInsert;
    }
}

/*
    Prints list.
*/
void printList ( struct Node** head )
{
    // skips over head node
    struct Node *curr = (*head)->next;

    while ( curr != NULL )
    {
        cout << curr->data << ' ';
        curr = curr->next;
    }

    cout << endl;
}

/*
    Frees all memory associated with List.
*/
void deleteList ( struct Node** head )
{
    struct Node *toDelete = *head;
    struct Node *curr = toDelete->next;
    while ( curr != NULL )
    {
        curr = curr->next;
        delete toDelete;
        toDelete = curr;
    }
}