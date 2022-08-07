#include <iostream>
#include <stack>
using namespace std;
int operation(char op, int op1, int op2)
{
    switch (op)
    {
    case '+':
        return op1 + op2;
    case '-':
        return op1 - op2;

    case '*':
        return op1 * op2;
    case '/':
        return op1 / op2;
    default:
        return 0;
    }
}
int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;
    int op1;
    int op2;
    stack<int> S;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            op2 = S.top();
            S.pop();
            op1 = S.top();
            S.pop();
            S.push(operation(s[i], op1, op2));
        }
        else
            S.push(((int)s[i]) - 48);
    }
    cout << S.top();
    return 0;
}