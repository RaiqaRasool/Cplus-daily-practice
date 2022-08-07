#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *link;
    Node()
    {
        data = 0;
        link = NULL;
    }
    Node(int x)
    {
        data = x;
        link = NULL;
    }
};
class Linkedlist
{
private:
    Node *front;
    Node *rear;

public:
    Linkedlist()
    {
        front = NULL;
        rear = NULL;
    }
    bool IsEmpty()
    {
        return (front == NULL && rear == NULL);
    }
    void push(int x)
    {
        Node *node = new Node(x);
        if (IsEmpty())
        {
            rear = node;
            front = node;
        }
        else
        {
            rear->link = node;
            rear = node;
        }
    }
    void pop()
    {
        if (IsEmpty())
        {
            return;
        }
        else
        {
            Node *temp = front;
            front = front->link;
            delete temp;
        }
    }
    void print()
    {
        Node *temp = front;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
};
int main()
{
    Linkedlist ll = Linkedlist();
    ll.push(1);
    ll.push(2);
    ll.print();
    ll.pop();
    ll.print();
    return 0;
}