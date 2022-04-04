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
// insertion at head of linked list
void insertAtHead(Node *&head, int d)
{

    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insertion at end/tail of the list
void insertAtTail(Node *&tail, int d)
{

    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

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

// insertion at any position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
    if (position == 1) // insert at start
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next = NULL)
    {
        insertAtTail(head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head)
{
    if (position == 1) // deleting first or head node
    {
        Node *temp = head;
        head = head->next;

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
        if (prev->next->next == NULL)
        {

            prev->next = NULL;

            return;
        }

        prev->next = curr->next;

        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // created a new node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pintied to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtTail(tail, 20);
    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtPosition(tail, head, 1, 22);
    print(head);

    deleteNode(4, head);
    print(head);

    cout << head->data << endl;
    cout << tail->data;
}