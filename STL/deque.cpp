#include <deque>
#include <iostream>
using namespace std;
void print(deque<int> d)
{
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    print(d);
    d.pop_back();
    print(d);
    d.push_back(3);
    print(d);
    d.pop_front();
    print(d);
    cout << d.at(0) << endl;
    cout << d[0] << endl;
    cout << d.front() << endl;
    cout << d.back() << endl;
    cout << d.empty() << endl;
    print(d);
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase: ";
    print(d);
    cout << "Size: " << d.size() << endl;
    cout << "Max Size: " << d.max_size();
    return 0;
}
