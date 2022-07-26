//give negative decimal number and get its binary
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int digit;
    int narr[32]={0};
    //First find binary of number
    int i=0;
    while(i<=31){
        digit=(n&1);
        narr[i]=digit;
        n=n>>1;
        i++;
    }
    for(int i=31;i>=0;i--)
    cout<<narr[i];
    return 0;
}