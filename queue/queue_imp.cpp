#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enque(int data)
    {
        if (rear == size)
        {
            cout << "Queue is full" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
    int deque()
    {
        if (front == rear)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }
    int fronti()
    {
        if (front == rear)
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.enque(5);
    q.enque(6);
    cout << q.deque() << endl;
    cout << q.fronti();
}