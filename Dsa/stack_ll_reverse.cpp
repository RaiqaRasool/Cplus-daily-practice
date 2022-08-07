#include <iostream>
#include <stack>
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
public:
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }
    void InsertStart(int x)
    {
        Node *node = new Node(x);
        node->link = head;
        head = node;
    }
    void Print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        delete temp;
    }
};
void PrintStack(stack<Node *> S)
{
    while (!S.empty())
    {
        cout << S.top()->data << " ";
        S.pop();
    }
}
int main()
{
    stack<Node *> S;
    Linkedlist ll = Linkedlist();
    ll.InsertStart(2);
    ll.InsertStart(3);
    ll.InsertStart(4);
    ll.Print();
    cout << endl;

    Node *temp = ll.head;
    while (temp != NULL)
    {
        S.push(temp);
        temp = temp->link;
    }
    PrintStack(S);

    temp = S.top();
    ll.head = temp;
    S.pop();
    while (!S.empty())
    {
        temp->link = S.top();
        temp = temp->link;
        S.pop();
    }
    temp->link = NULL;
    cout << endl;
    ll.Print();

    return 0;
}