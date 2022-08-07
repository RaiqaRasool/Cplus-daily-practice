// use of function pointer is that function pointers can be passed to another
//  function as argument and then they can use it
#include <iostream>
using namespace std;
int compare(int a, int b)
{
    if (a > b)
        return 1;
    else
        return -1;
}
void bubbleSort(int *A, int size, int (*compare)(int, int))
{
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int A[] = {3, 2, 1, 5, 6, 4};
    bubbleSort(A, 6, compare);
    for (int i = 0; i < 6; i++)
    {
        cout << A[i];
    }
    return 0;
}