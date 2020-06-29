//A program that finds an input as uppercase/lowercase/digit/special character

#include<iostream>
using namespace std;
int main()
{
    char input;
    cout<<"Enter your character: "; cin>>input;
    if(input>='A' && input<='Z')
        cout<<"It's upper case";
    else if(input>='a' && input<='z')
        cout<<"It's lower case";
    else if(input>=0 && input<=9)
        cout<<"It's digit";
    else
        cout<<"It's special character";
    return 0;
}
