#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{
public:
    Node *rear;
    Node *front;

    Queue()
    {
        rear = NULL;
        front = NULL;
    }

    void enque(int data)
    {
        Node *newNode = new Node(data);
        if (front == NULL)
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    int deque()
    {
        if (front == NULL)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int result = front->data;
        front = front->next;
        return result;
    }
};
int main()
{

    Queue q;
    q.enque(5);
    q.enque(6);
    cout << q.deque() << endl;
    cout << q.deque();
}