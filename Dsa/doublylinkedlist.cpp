#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        data = 0;
        next = NULL;
        prev = NULL;
    }
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

class doublyLinkedList
{
public:
    Node *head;
    Node *tail;
    doublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    void InsertStart(int x)
    {
        Node *node = new Node(x);
        if (head == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        head->prev = node;
        node->next = head;
        head = node;
    }
    void Print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
    void ReversePrint()
    {
        Node *temp = tail;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
    }
    void ReversPrintRecursion(Node *node)
    {
        if (node == NULL)
        {
            return;
        }
        cout << node->data;
        ReversPrintRecursion(node->prev);
    }
    void ReverseList()
    {
        Node *current = head;
        Node *temp;
        while (current != NULL)
        {
            temp = current->next;
            current->next = current->prev;
            current->prev = temp;
            current = temp;
        }
        temp = head;
        head = tail;
        tail = temp;
    }
    void ReverseListRecursion(Node *current)
    {
        Node *temp;

        if (current == NULL)
        {
            temp = head;
            head = tail;
            tail = temp;
            return;
        }

        temp = current->next;
        current->next = current->prev;
        current->prev = temp;
        ReverseListRecursion(temp);
    }
    void DeleteNode(int n)
    {
        Node *temp = head;
        if (n == 1)
        {
            head = head->next;
            head->prev = NULL;
            delete temp;
            return;
        }
        for (int i = 0; i < n - 1; i++)
        {
            temp = temp->next;
        }
        Node *prev = temp->prev;
        Node *next = temp->next;
        prev->next = next;
        next->prev = prev;
        temp->next = NULL,
        temp->prev = NULL,
        delete temp;
    }
    void InsertAtTail(int x)
    {
        Node *node = new Node(x);
        if (tail == NULL)
        {
            head = node;
            tail = node;
            return;
        }
        Node *temp = tail;
        temp->next = node;
        node->prev = temp;
        node->next = NULL;
        tail = node;
    }
    // void InsertNode(int x, int n)
    // {
    //     Node *node = new Node(x);
    //     Node *temp = head;
    //     if (n == 1)
    //     {
    //         head = node;
    //         temp->prev = node;
    //         node->next = temp;
    //         node->prev = NULL;
    //         return;
    //     }
    //     for (int i = 0; i < n - 1; i++)
    //     {
    //         temp = temp->next;
    //     }
    //     node->prev = temp;
    //     node->next = temp->next;
    //     temp->next->prev = node;
    //     temp->next = node;
    // }
};
int main()
{
    doublyLinkedList *dll = new doublyLinkedList();
    dll->InsertAtTail(2);
    dll->InsertAtTail(4);
    dll->InsertAtTail(3);
    // dll->Print();
    // cout << endl;
    // dll->ReversePrint();
    // cout << endl;
    // dll->ReversPrintRecursion(dll->tail);
    // dll->ReverseListRecursion(dll->head);
    // dll->Print();
    // dll->DeleteNode(2);
    cout << endl;
    dll->Print();
    return 0;
}