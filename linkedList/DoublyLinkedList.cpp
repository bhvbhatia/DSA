#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
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

void print(Node *&head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// find the length of the linked list
int getLength(Node *&head)
{

    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {

        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node *&tail, Node *&head, int d)
{
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1) // insert at start
    {
        insertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (position == 1) // deleting first or head node
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        // deleting middle or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;

            curr = curr->next;

            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
        }

        curr->prev = NULL;
        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print(head);
    cout << getLength(head) << endl;

    insertAtHead(tail, head, 11);
    print(head);

    insertAtTail(tail, head, 14);
    print(head);

    insertAtPosition(tail, head, 3, 50);
    print(head);

    insertAtPosition(tail, head, 4, 10);
    print(head);

    deleteNode(4, head, tail);
    print(head);

    return 0;
}