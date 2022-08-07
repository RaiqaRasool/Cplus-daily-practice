#include <iostream>
using namespace std;
int Add(int a, int b)
{
    return a + b;
}
int main()
{
    //  pointer to function
    // return_type (*nameofpointer)(parameters data type)
    int (*p)(int, int);
    p = Add; // function name return pointer to it
    cout << p(2, 3);
    return 0;
}