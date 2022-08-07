#include <iostream>
using namespace std;
#define MAX_SIZE 101
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class Stack
{
    Node *top;

public:
    Stack()
    {
        top = NULL;
    }
    void Push(int x)
    {
        Node *node = new Node(x);
        if (top == NULL)
        {
            top = node;
            return;
        }
        node->next = top;
        top = node;
    }
    int Pop()
    {
        if (top == NULL)
        {
            cout << "Stack is empty";
            return -1;
        }
        int x = top->data;
        top = top->next;
        return x;
    }
    void Print()
    {
        Node *temp = top;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Stack *s = new Stack();
    s->Push(1);
    s->Push(2);
    s->Print();
    s->Pop();
    cout << endl;
    s->Print();

    return 0;
}