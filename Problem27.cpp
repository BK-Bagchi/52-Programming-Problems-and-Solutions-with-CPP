//A program that show a 3 digit given number is an armstrong number or not

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num, ary[3], a, rslt= 0;
    cout<<"Enter your 3 digit number: "; cin>>num;

    a=num/1;
    a=a%10;
    ary[2]= a;

    a= num/10;
    a= a%10;
    ary[1]= a;

    a= num/100;
    a= a%10;
    ary[0]=a;

    rslt= pow(ary[0],3)+ pow(ary[1],3)+ pow(ary[2],3);
    if(rslt== num)
        cout<<"\nIt's an armstrong number\n";
    else
        cout<<"\nIt's not an armstrong number\n";
    return 0;
}

