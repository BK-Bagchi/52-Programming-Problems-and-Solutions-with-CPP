//Take 3 numbers as input. First 2 numbers represents a range. Now see which numbers within the range can be divided by the 3rd number

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cout<<"Enter number 1: "; cin>>num1;
    cout<<"Enter number 2: "; cin>>num2;
    cout<<"Enter number 3: "; cin>>num3;

    for(int i=num1; i<=num2; i++)
    {
        if(i%num3==0)
            cout<<i<<endl;
    }
    return 0;
}

