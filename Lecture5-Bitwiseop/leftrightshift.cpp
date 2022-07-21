#include <iostream>
using namespace std;

int main(){
    int n=5;
    //left shift operator
    //add zeros on the left thus shifting all bits to left
    //output of this 4*n because for n<<1 it is n*2
    //this 2 convention will not work in case of very large number
    //as shifting to left will make first bit 1 and thus -ve number
    cout<<(n<<2)<<endl; 
    //right shift operator
    //remove bits from left
    // output is n/2 for n>>1
    cout<<(n>>2);
    return 0;
}