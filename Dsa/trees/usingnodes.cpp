#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node()
    {
        data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
class bst
{

public:
    Node *root;
    bst()
    {
        root = NULL;
    }
    Node *insert(Node *root, int x)
    {
        Node *node = new Node(x);
        if (root == NULL)
            root = node;
        else if (x <= root->data)
            root->left = insert(root->left, x);
        else
            root->right = insert(root->right, x);
        return root;
    }
    bool Search(Node *root, int x)
    {
        if (root == NULL)
            return false;
        if (root->data == x)
            return true;
        else if (x < root->data)
            return Search(root->left, x);
        else
            return Search(root->right, x);
    }
    int FinMinIter()
    {
        Node *temp = root;
        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        return temp->data;
    }
    int FindMaxIter()
    {
        Node *temp = root;
        while (temp->right != NULL)
        {
            temp = temp->right;
        }
        return temp->data;
    }
    int FindMinRec(Node *root)
    {
        if (root == NULL)
            return -1;
        else if (root->left == NULL)
            return root->data;
        else
            return FindMinRec(root->left);
    }
    int FindMaxRec(Node *root)
    {
        if (root == NULL)
            return -1;
        else if (root->right == NULL)
            return root->data;
        else
            return FindMinRec(root->right);
    }
    int FindHeight(Node *root) //--time complexity=O(n)
    {
        if (root == NULL)
            return -1;
        return max(FindHeight(root->left), FindHeight(root->right)) + 1;
    }
    void LevelOrder() // T(n)=O(n) and Space-complexity=O(n) because max number of nodes can be in lowest level which is n/2 where n is total number of nodes
    {
        if (root == NULL)
            return;
        queue<Node *> Q;
        Q.push(root);
        while (!Q.empty())
        {
            Node *current = Q.front();
            cout << current->data << " ";
            if (current->left != NULL)
                Q.push(current->left);
            if (current->right != NULL)
                Q.push(current->right);

            Q.pop();
        }
    }
    void PreOrder(Node *root) //----Space complexity=O(h) where h is height of tree
    // worst height is n-1 so space complexity for it would be O(n)
    // best/Average height is logn so space complexity will be O(logn)
    {
        if (root == NULL)
            return;
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
    void InOrder(Node *root)
    {
        if (root == NULL)
            return;
        InOrder(root->left);
        cout << root->data << " ";
        InOrder(root->right);
    }
    void PostOrder(Node *root)
    {
        if (root == NULL)
            return;
        InOrder(root->left);
        InOrder(root->right);
        cout << root->data << " ";
    }
};
int main()
{
    bst tree = bst();
    tree.root = tree.insert(tree.root, 15);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 21);

    int n;
    cout << "Enter number to be searched: ";
    cin >> n;

    if (tree.Search(tree.root, n))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    cout << "Min is: " << tree.FinMinIter() << endl;
    cout << "Max is: " << tree.FindMaxIter() << endl;
    cout << "Min is: " << tree.FindMinRec(tree.root) << endl;
    cout << "Max is: " << tree.FindMaxRec(tree.root) << endl;
    cout << "Height of tree: " << tree.FindHeight(tree.root) << endl;
    cout << "Printing Tree in Level Order " << endl;
    tree.LevelOrder();
    cout << endl;
    cout << "Printing Tree in Pre Order " << endl;
    tree.PreOrder(tree.root);
    cout << endl;
    cout << "Printing Tree in In Order " << endl;
    tree.InOrder(tree.root);
    cout << endl;
    cout << "Printing Tree in Post Order " << endl;
    tree.PostOrder(tree.root);
    cout << endl;
    return 0;
}