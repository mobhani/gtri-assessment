/*
    Linked list ADT used for exercise 2.
    This ADT only contains functions required by 
    exercise 2 and is not a fully-fledged Linked List.
*/

#include <cstddef>
using namespace std;

class Node
{
    public:
    int data;
    struct Node *next;
};