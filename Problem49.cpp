//Program that finds out a number is a prime number or not

#include<iostream>
using namespace std;
int main()
{
    int number, prime=1;
    cout<<"Enter your number: "; cin>>number;
    for(int i=2; i<number; i++)
    {
        if(number%i==0)
            {prime=0; break;}
        else
            prime=1;
    }
    if(prime==1)
        cout<<"It's a prime number";
    else
        cout<<"It's not a prime number";
    return 0;
}
