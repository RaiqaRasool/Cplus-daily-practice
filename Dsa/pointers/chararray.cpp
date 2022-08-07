#include <iostream>
using namespace std;

// pointers always take 4 bytes no matter if they are char* or int* as on the base they are int
// their data type is needed same as variable to have right dereferencing
// Resource: https://www.geeksforgeeks.org/difference-between-sizeofint-and-sizeofint-in-c-c/

// void print(char *C)
// {
//     int i = 0;
//     while (C[i] != '\0')
//     {
//         cout << C[i];

//         i++;
//     }
// }

// another way of doing this
void print(const char *C) // here const will stop this function from writing string it has nothing to do with not allowing C+=1
// as it is copy of actual address of array so we can perform increment/decrement on it
{
    cout << "Size of char* pointer: " << sizeof(C) << endl; // the sizeof a pointer is obviously 8bytes = 64 bits on your machine
    cout << "Size of integer: " << sizeof(int) << endl;
    cout << "Size of dereferenced pointer: " << sizeof(*C) << endl;
    int i = 0;
    while (*C != '\0')
    {
        cout << *C;
        C++;
    }
}

int main()
{
    char C[4] = {'A', 'B'}; // string gets stored in the space of array
    cout << sizeof(C) << endl;
    cout << strlen(C) << endl;
    // char M[20] = "Raiqa";
    // cout << M << endl;
    // cout << strlen(M) << endl;
    print(C);

    // char *C = "Raiqa"; // string gets stored as constant during compile time and can't be changed
    // C[0] = 'H';   // it is throughing error as it is constant

    return 0;
}