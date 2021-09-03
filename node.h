#ifndef NODE_H
#define NODE_H

class Node {
private:
    float data;
    Node* prev;
    Node* next;

    Node();
    Node(float);

    void insertFront(float);
    float deleteFront();

    friend class LinkedList;
};

#endif // NODE_H
