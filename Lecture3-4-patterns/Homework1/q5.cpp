//converting fahrenhiet to celsius table

#include <iostream>
using namespace std;

int main(){
    int F[5]={30,40,50,60,70};
    float C[5];
    for(int i=0;i<sizeof(F)/sizeof(F[0]);i++)
    {
        C[i]=(float)(F[i]-32)*((float)5/9);
        cout<<C[i]<<"\t";
    }
    return 0;
}