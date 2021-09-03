#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "node.h"

class LinkedList {
private:
    Node head;
    Node tail;

public:
    LinkedList();
    ~LinkedList();

    void insertFront(float d);
    void insertBack(float d);

    float deleteFront();
    float deleteBack();

    int size();

    bool isEmpty();
    bool isFull();

    void print();

    void deleteAll();

};

#endif // LINKEDLIST_H
