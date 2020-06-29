//All multiplicand of a number

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your number: "; cin>>number;
    cout<<"Multiplicands of the number are: \n";
    for(int i=1; i<=number; i++)
    {
        if(number%i==0)
            cout<<i<<" ";
    }
    return 0;
}
