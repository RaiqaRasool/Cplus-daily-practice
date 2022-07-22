//find if a given character is capital letter
//small letter or a digit

#include <iostream>
using namespace std;

int main(){
    char ch;

    cout<<"Enter character: ";
    cin>>ch;

    if(ch>='a' && ch<='z')
    cout<<"This is small letter";
    else if(ch>='A'&& ch<='Z')
    cout<<"This is capital letter";
    else if(ch>='0'&&ch<='9')
    cout<<"This is character number";
    else
    cout<<"It is undefined character";

    return 0; 
}