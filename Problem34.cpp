//Take 3 numbers as input. First numbers represents a range starts from 1. Now see which numbers within the range can be divided by the 2nd and 3rd number

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter number 1: "; cin>>num1;
    cout<<"Enter number 2: "; cin>>num2;
    cout<<"Enter number 3: "; cin>>num3;

    for(int i=1; i<=num1; i++)
    {
        if(i%num2==0 && i%num3==0)
            cout<<i<<endl;
    }
    return 0;
}


