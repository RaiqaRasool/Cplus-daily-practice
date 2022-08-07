#include <iostream>
#include <set>
#include <map>
using namespace std;

int main()
{
    set<int> s1({1, 2, 3, 4, 5});
    map<string, string> m1;
    m1 = {
        {"name", "Raiqa"},
        {"age", "21"}};

    for (auto it : m1)
    {
        cout << it.first;
    }
    return 0;
}