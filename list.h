#ifndef LIST_H
#define LIST_H
#include <iostream>

using namespace std;

typedef int Data;

class QueneOnSingleLinkedList
{
public:
    QueneOnSingleLinkedList( );
    ~QueneOnSingleLinkedList( );
    void push( Data datum );
    Data pop( );
    void showQuene( ) const;
    void clearQuene( );
    bool queneIsEmpty( ) const;

private:
    struct Node
    {
        Data datum;
        Node *link;
    } *top;

};

#endif
