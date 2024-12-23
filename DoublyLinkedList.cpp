#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

DoublyLinkedList::~DoublyLinkedList()
{
    Node *current = head;
    while (current != nullptr)
    {
        Node *nextNode = current->getNext();
        delete current;
        current = nextNode;
    }
}

void DoublyLinkedList::displayList() const
{
    Node *current = head;
    if (current == nullptr)
    {
        cout << "the list is empty.\n";
        return;
    }

    while (current != nullptr)
    {
        cout << current->getData() << "<->";
        current = current->getNext();
    }
    cout << "NULL\n";
}

void DoublyLinkedList::append(int value) // add last
{
    Node *newNode = new Node(value);
    if (tail)
    {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail = newNode;
    }
    else
    {
        head = tail = newNode;
    }
}

void DoublyLinkedList::prepend(int value) // add first
{
}
