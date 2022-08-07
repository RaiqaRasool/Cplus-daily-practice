#include <iostream>
using namespace std;
int Sum(int a[], int size) // array is always passed as pointer to function so we have to pass array size
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}
void Double(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = 2 * a[i];
    }
}
int main()
{
    int a[] = {2, 4, 5, 8, 1};
    int size = sizeof(a) / sizeof(a[0]);
    int total = Sum(a, size);
    // a++ is not possible it will give error while it is allowed for pointers
    // but not for arrays
    cout << a << endl;
    cout << &a[0] << endl;
    cout << a[0] << endl;
    cout << *(a + 1) << endl;
    cout << "Total :" << total << endl;
    Double(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}