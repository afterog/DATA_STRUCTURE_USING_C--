#include <iostream>

class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

Node *head;

void insertAtBegining(int value)
{
    Node *temp = new Node(value);
    temp->next = head;
    head = temp;
}

void print()
{
    Node *temp = head;
    while (temp != nullptr)
    {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << temp;
}

int main(int argc, char const *argv[])
{
    head = nullptr;
    insertAtBegining(5);
    insertAtBegining(3);
    insertAtBegining(9);
    insertAtBegining(2);
    print();
    return 0;
}
