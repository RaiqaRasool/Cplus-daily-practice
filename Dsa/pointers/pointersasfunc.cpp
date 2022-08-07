#include <iostream>
using namespace std;
// only pass pointers for heap or global memory from functions
//  at top in stack memory to functions below in memory otherwise
// these functions will get executed thus removed from stack
//  and we will get garbage value on accessing address given by pointer
int *Add(int *a, int *b)
{
    int *c = new int;
    *c = *a + *b;
    return c;
}
int main()
{
    int a = 2, b = 3;
    int *c = Add(&a, &b);
    cout << c;
    cout << endl
         << *c;
    return 0;
}