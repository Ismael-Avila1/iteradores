#include "linkedlist.h"

LinkedList::LinkedList() {
    head.next = &tail;
    tail.prev = &head;
}

LinkedList::~LinkedList() {
    deleteAll();
}

void LinkedList::insertFront(float d) {
    head.insertFront(d);
}

void LinkedList::insertBack(float d) {
    tail.prev->insertFront(d);
}

float LinkedList::deleteFront() {
    if(isEmpty())
        return -1;
    else
        return head.deleteFront();
}

float LinkedList::deleteBack() {
    if(isEmpty())
        return -1;
    else
        return tail.prev->prev->deleteFront();
}

int LinkedList::size() {
    int contNodes = 0;
    Node* temp = head.next;

    while (temp != &tail) {
        contNodes++;
        temp = temp->next;
    }
    return contNodes;
}

bool LinkedList::isEmpty() {
    return head.next == &tail;
}

bool LinkedList::isFull() {
    return false;
}

void LinkedList::print() {
    Node* temp = head.next;

    while(temp != &tail) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "\b\b\b";
}

void LinkedList::deleteAll() {
    Node* temp;

    while (head.next != &tail) {
        temp = head.next;
        head.next = head.next->next;

        delete temp;
    }
    tail.prev = &head;
}
