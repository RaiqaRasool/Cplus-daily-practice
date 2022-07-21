//Subtract product and sum of the digits of an int
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int prod=1,sum=0;
    while(n!=0){
        int digit=n%10;
        prod*=digit;
        sum+=digit;
        n=n/10;

    }
    cout<<"Prod-Sum: "<<prod-sum;
}