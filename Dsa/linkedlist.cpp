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
public:
    Node *head;
    Linkedlist()
    {
        head = NULL;
    }

    void InsertNode(int x)
    {
        Node *temp = new Node(x);
        temp->link = head;
        head = temp;
    }
    void Print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
    }
    void InsertNth(int data, int n)
    {
        Node *node = new Node(data);
        int i = 0;
        if (n == 1)
        {
            node->link = head;
            head = node;
            return;
        }
        Node *temp = head;
        while (i < n - 2)
        {
            temp = temp->link;
            i++;
        }
        node->link = temp->link;
        temp->link = node;
    }
    void DeleteNth(int n)
    {
        Node *temp = head;
        Node *node = new Node();
        if (n == 1)
        {
            node = head;
            head = head->link;
            node->link = NULL;
            delete node;
            return;
        }
        for (int i = 0; i < n - 2; i++)
        {
            temp = temp->link;
        }
        node = temp->link;
        temp->link = node->link;
        node->link = NULL;
        delete node;
    }
    void ReverseList()
    {
        Node *prev = NULL;
        Node *current = head;
        Node *next;
        while (current != NULL)
        {
            next = current->link;
            current->link = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    void PrintRecursion(Node *current)
    {
        if (current == NULL)
            return;
        else
            cout << current->data << " ";
        PrintRecursion(current->link);
    }
    void ReversePrint(Node *current)
    {
        if (current == NULL)
            return;
        else
        {
            ReversePrint(current->link);
            cout << current->data << " ";
        }
    }
    void ReverseListRecursion(Node *current)
    {
        if (current->link == NULL)
        {
            head = current;
            return;
        }
        else
        {
            ReverseListRecursion(current->link);
            Node *next = current->link;
            next->link = current;
            current->link = NULL;
        }
    }
};
int main()
{
    // cout << "How many numbers?";
    // int n, x;
    // cin >> n;
    // cout << endl;
    Linkedlist *list = new Linkedlist();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Enter number: ";
    //     cin >> x;
    //     cout << endl;
    //     list->InsertNode(x);
    //     list->Print();
    //     cout << endl;
    // }
    list->InsertNth(1, 1);
    list->InsertNth(2, 2);
    list->InsertNth(3, 2);
    list->InsertNth(4, 2);
    // list->DeleteNth(1);
    // list->Print();
    // cout << list->head << endl;
    // list->ReverseList();
    // list->Print();
    // cout << list->head;
    list->ReverseListRecursion(list->head);
    list->PrintRecursion(list->head);
    cout << endl;
    // list->ReversePrint(list->head);
    return 0;
}