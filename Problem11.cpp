//Determine factorial of a given number

#include<iostream>
using namespace std;
int main()
{
    int number, fact=1;
    cout<<"Enter your number: "; cin>>number;
    for(int i=1; i<=number; i++)
        fact= fact*i;
    cout<<"Factorial of the number is: "<<fact;
    return 0;
}
