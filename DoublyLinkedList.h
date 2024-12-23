#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "Node.h"

class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

protected:
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void append(int value);  // add last
    void prepend(int value); // add first

    void displayList() const;
};

#endif // DOUBLY_LINKED_LIST_H