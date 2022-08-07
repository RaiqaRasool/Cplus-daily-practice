#include <iostream>
using namespace std;

// pointers always take 4 bytes no matter if they are char* or int* as on the base they are int
// their data type is needed same as variable to have right dereferencing
int main()
{
    int a = 10;
    int *p;
    p = &a;
    char h = 'h';
    char *hp = &h;
    ;
    cout << "INTEGER POINTER DEAL" << endl;
    cout << a << endl;
    cout << p << endl;

    *p = 12;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl; // dereferencing
    cout << "size of integer: " << sizeof(int) << endl;
    cout << p + 1 << endl;
    cout << *(p + 1) << endl; // int of 4 byte so increment is of 4, float is also stored in 4 bytes

    cout << "CHAR POINTER" << endl;
    cout << "hp: " << (int *)hp << endl;
    cout << "*hp: " << *hp << endl;
    cout << "hp+1: " << (int *)(hp + 1) << endl; // because char is of 1 byte so increment of one byte

    cout << "WHY POINTER DATA TYPE SHOULD BE SAME AS VARIABLE?" << endl;
    int num = 1025; // its binary boxes have 1 in first byte 4 in second byte
    int *pInt = &num;
    cout << "Address: " << pInt << " Value: " << *pInt << endl;
    char *pch;
    pch = (char *)&num;
    cout << "Address: " << (int *)pch << " Value: " << (int)*pch << endl;
    cout << "Address: " << (int *)(pch + 1) << " Value: " << (int)*(pch + 1) << endl;

    cout << "VOID Pointer" << endl; // no type specification we can only see address in it can't do only allowable operations(+,-) on it and also can't dereference it
    void *pv;
    pv = p;
    cout << "Address: " << pv << endl;

    return 0;
}