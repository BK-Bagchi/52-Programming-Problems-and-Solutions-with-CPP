//A program that show a 3 digit given number at it's reverse form
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, ary[3], a, rslt= 0;
    cout<<"Enter your number(max 8 digit): "; cin>>num;

    cout<<"\nIn reverse form we get: ";
    a=num/1;
    a=a%10;
    cout<<a;

    a= num/10;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/100;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/1000;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/10000;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/100000;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/1000000;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/10000000;
    a= a%10;
    if(a!=0)
        cout<<a;

    a= num/10000000000;
    a= a%10;
    if(a!=0)
        cout<<a;
    return 0;
}


