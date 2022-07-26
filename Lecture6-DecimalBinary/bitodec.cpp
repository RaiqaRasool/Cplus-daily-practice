#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    int dec = 0;
    int i = 0;
    cin >> n;
    while (n != 0)
    {
        if (n % 10 == 1)
            dec += pow(2, i);
        i++;
        n = n / 10;
    }
    cout << dec;
}