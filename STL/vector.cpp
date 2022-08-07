#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // vector<datatype>name(sizeofarr,valuewithwhichallelemsinarrayshouldbeinitialized)
    vector<int> vSized(5, 1);
    for (int i : vSized)
    {
        cout << i << " ";
    }
    cout << endl;
    vector<int> vSizedCopy(vSized); // will copy vSized to vSizedCopy
    for (int i : vSizedCopy)
    {
        cout << i << " ";
    }
    cout << endl;
    v.push_back(1);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(2);
    cout << "Size: " << v.size() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.push_back(3);
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
}