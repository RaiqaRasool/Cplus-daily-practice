#include<iostream>
using namespace std;

int main(){
    char ch='A';
    for(int i=1;i<=4;i++){

        for(int j=1;j<=4;j++){
            cout<<char(ch+i+j-2)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}