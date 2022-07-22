#include<iostream>
using namespace std;

int main(){
    char ch='D';
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<char(ch-i+j)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}