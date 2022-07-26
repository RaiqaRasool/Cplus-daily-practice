#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int digit;
    int number=0;
    int i=0;
    cin>>n;
    while(n!=0){
        digit=n&1; 
        n=n>>1;
        number=digit*pow(10,i)+number;
        i++; 
    }
    cout<<"Binary is: "<<number;

    return 0;
}