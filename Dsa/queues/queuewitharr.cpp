#include <iostream>
using namespace std;
#define MAX_SIZE 101
class queue
{
private:
    int front;
    int rear;
    int list[MAX_SIZE];

public:
    queue()
    {
        front = -1;
        rear = -1;
    }
    bool Is_Empty()
    {
        return (rear == -1 && front == -1);
    }
    bool IsFull()
    {
        return (rear + 1) % MAX_SIZE == front ? true : false;
    }
    void push(int x)
    {
        if (IsFull())
        {
            return;
        }
        else if (rear == -1)
        {
            rear++;
            front++;
        }
        else
        {
            rear = (rear + 1) % MAX_SIZE;
        }
        list[rear] = x;
    }
    void pop()
    {
        if (Is_Empty())
        {
            return;
        }
        else if (rear == front)
        {
            rear = -1;
            front = -1;
        }
        else
        {
            front = (front + 1) % MAX_SIZE;
        }
    }
    void print()
    {
        int temp = front;
        while (temp != rear)
        {
            cout << list[temp] << " ";
            temp = (temp + 1) % MAX_SIZE;
        }
        cout << endl;
    }
};
int main()
{
    queue q = queue();
    q.push(1);
    q.push(2);
    q.push(3);
    q.print();
    q.pop();
    q.print();
    return 0;
}