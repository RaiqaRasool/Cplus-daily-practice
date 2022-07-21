#include<iostream>
using namespace std;

int main(){
    int n1=0,n2=1;
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<n1<<"\t"<<n2<<"\t";
    for(int i=0;i<n;i++){
        int next=n1+n2;
        cout<<next<<"\t";
        n1=n2;
        n2=next;
    }
    return 0;
}