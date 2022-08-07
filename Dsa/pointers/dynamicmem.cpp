#include <iostream>
using namespace std;
// size_t is an unsigned integer
// it takes size in bytes
int main()
{
    int a;
    int *p;
    p = new int; // dynamic memory allocation on heap
    *p = 10;
    delete p;             // removing memory from heap
    p = new int[20];      // dynamically allocating memory for array
    delete[] p;           // removing array
    cout << p[1] << endl; // we have removed the heap memory but still have its pointer in our stack memory
    // so to remove access completely from it set pointer to null as
    p = NULL;
    cout << p; // and this time answer will be null
    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // int A[n];
    // for (int i = 0; i < n; i++)
    // {
    //     A[i] = i;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << A[i] << " ";
    // }
    return 0;
}