#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

int main()
{
    DoublyLinkedList dll;

    dll.append(10);
    dll.append(12);
    dll.append(14);

    dll.displayList();

    return 0;
}