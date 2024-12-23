#ifndef NODE_H
#define NODE_H

class Node
{
private:
    int data;
    Node *next;
    Node *prev;

protected:
public:
    Node(int data);

    int getData() const;
    Node *getNext() const;
    Node *getPrev() const;

    void setData(int newData);
    void setNext(Node *nextNode);
    void setPrev(Node *nextPrev);
};

#endif // NODE_H