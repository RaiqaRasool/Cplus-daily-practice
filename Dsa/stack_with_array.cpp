// ADT with functions
// Push()
// Pop()
// Top()-- get top element of stack
// IsEmpty() -- check if stack is empty or not
#include <iostream>
using namespace std;
#define MAX_SIZE 101

class Stack
{
    int top;

public:
    int A[MAX_SIZE];
    Stack()
    {
        top = -1;
    }
    bool Push(int x)
    {
        if (top == MAX_SIZE - 1)
        {
            cout << "Stack Overflow!!";
            return false;
        }
        A[++top] = x;
        return true;
    }
    bool IsEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    int Pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty";
            return -1;
        }
        int x = A[top--];
        return x;
    }
    void Print()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << A[i] << " ";
        }
    }
};
int main()
{
    Stack *s = new Stack();
    s->Push(1);
    s->Push(2);
    // s->Pop();
    s->Print();
    return 0;
}