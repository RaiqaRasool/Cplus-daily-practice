#include <iostream>
#include <queue>
using namespace std;
int main()
{

    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    max_heap.push(1);
    max_heap.push(2);
    max_heap.push(3);

    for (int i = 0; i < max_heap.size(); i++)
    {
        cout << max_heap.top() << " ";
        max_heap.pop();
    }
    cout << endl;

    return 0;
}