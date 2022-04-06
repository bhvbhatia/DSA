#include <bits/stdc++.h>
using namespace std;

class Node // node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int d)
{

    if (tail == NULL) // empty list
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    else
    {
        // non empty list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        if (curr == prev)
        { // for single node
            tail = NULL;
        }
        if (tail == curr) // for >2 nodes
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *&tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);

    return 0;
}