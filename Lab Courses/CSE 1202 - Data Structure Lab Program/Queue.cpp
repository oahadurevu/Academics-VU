#include<iostream>
using namespace std;

const int max_queue = 10;
int Queue[max_queue];
int Front = -1, rear = -1;
int x;

void enqueue()
{
    if (rear == max_queue - 1)
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter Enqueue Value: ";
        cin >> x;
        if (Front == -1 && rear == -1)
        {
            Front = rear = 0;
        }
        else
        {
            rear++;
        }
        Queue[rear] = x;
    }
}

void dequeue()
{
    if (Front == -1 || Front > rear)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Dequeued: " << Queue[Front] << endl;
        Front++;
        if (Front > rear)  // Reset if queue becomes empty
        {
            Front = rear = -1;
        }
    }
}

void display()
{
    if (Front == -1 || Front > rear)
    {
        cout << "Queue is Empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = Front; i <= rear; i++)
        {
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}
