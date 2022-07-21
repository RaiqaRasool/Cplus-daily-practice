#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n==1||n==0){
        cout<<"Not a prime number";
        exit(0);
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"Not a prime";
            exit(0);
        }
    }
    cout<<"Prime number";
    return 0;
}



//Learning
// exit() versus _Exit()
//exit() teminates program after doing cleaning like buffer flush
//_Exit() terminates program without cleanup