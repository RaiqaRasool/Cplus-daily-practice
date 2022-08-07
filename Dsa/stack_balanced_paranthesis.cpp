#include <iostream>
#include <stack>
using namespace std;
bool match_paranthesis(char x, stack<char> S)
{
    switch (x)
    {
    case ')':
        return S.top() == '(';
    case ']':
        return S.top() == '[';
    case '}':
        return S.top() == '{';
    default:
        return false;
    };
}
bool paranthesis_balance(string s)
{
    stack<char> S;
    for (int i = 0; i < s.length(); i++)
    {
        char x = s[i];
        if (x == '(' || x == '[' || x == '{')
            S.push(x);
        else if (x == ')' || x == ']' || x == '}')
        {
            if (S.empty() || !match_paranthesis(x, S))
                return false;
            else
                S.pop();
        }
    }
    return S.empty();
}
int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << (paranthesis_balance(s) ? "Balanced" : "Not Balanced");
    return 0;
}