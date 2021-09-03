#include "node.h"

Node::Node() {
     prev = nullptr;
     next = nullptr;
}

Node::Node(float d) {
    data = d;
    prev = nullptr;
    next = nullptr;
}

void Node::insertFront(float d) {
    Node* newNode = new Node(d);

    newNode->next = this->next;
    newNode->prev = this;

    this->next = newNode;
    this->next->next->prev = newNode;
}

float Node::deleteFront() {
    float d;
    d = this->next->data;

    this->next = this->next->next;
    delete this->next->prev;
    this->next->prev = this;

    return d;
}
