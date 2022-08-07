#include <iostream>
using namespace std;
void increment(int *a)
{
    (*a)++;
}
int main()
{
    int a = 3;
    increment(&a);
    cout << a;
    return 0;
}