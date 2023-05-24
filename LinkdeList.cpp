#include <iostream>

// define a class node
class Node
{
public:
    int data;
    Node *next;

    // Constructor function
    Node(int value) : data(value), next(nullptr) {}
};

int main()
{

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    node1->next = node2;
    node2->next = node3;
    node3->next = nullptr;

    Node *current = node1;
    short i = 0;
    while (current != nullptr)
    {
        std::cout << "data" << i << " :" << current->data << std::endl;
        current = current->next;
        i++;
    }

    delete node1;
    delete node2;
    delete node3;

    current = nullptr;

    return 0;
}
