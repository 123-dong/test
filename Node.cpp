#include "Node.h"

Node::Node(int data)
{
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

int Node::getData() const
{
    return data;
}

Node *Node::getNext() const
{
    return next;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setData(int newData)
{
    data = newData;
}

void Node::setNext(Node *newNext)
{
    next = newNext;
}

void Node::setPrev(Node *newPrev)
{
    prev = newPrev;
}
