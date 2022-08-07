#include <iostream>
using namespace std;
// can also be written as (*A)[3]
// void func(int A[][3])
// {
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << A[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// Using single pointer
void func(int *arr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *((arr + i * 3) + j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    int B[2][3] = {
        {2, 3, 4},
        {4, 5, 6}};
    // B -> B[0] -> B[0][0]
    // B[i][j]=*(*B[i]+j)=*(*(B+i)+j)
    // Both B and B[0] returns the same address
    // only difference is that B returns a pointer to an array of 3 elements while
    // B[0] or *B returns the pointer to first integer of B[0] array
    // type of pointer only matters when dereferencing or performing arithmetic otherwise both B and B[0]
    // are giving same value
    // cout << B << endl;
    // cout << B + 1 << endl;
    // cout << B[0] << endl;
    // cout << *B << endl;
    // cout << *B[0] << endl; // giving value at B[0][0]
    // cout << &B[0][0] << endl;
    // if (B == &B[0])
    //     cout << "True";
    // for (int i = 0; i < 2; i++)
    // {
    //     cout << "B[" << i << "]: " << B[i] << endl;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Address: B[" << i << "]"
    //              << "[" << j << "]: " << &B[i][j] << endl;
    //     }
    // }
    // func(B);
    func(*B);
    return 0;
}