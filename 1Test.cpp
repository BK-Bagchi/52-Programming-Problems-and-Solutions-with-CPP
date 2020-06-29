//Program that finds out a number is a prime number or not

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, prime=1, counter=0;
    cout<<"Enter starting limit: "; cin>>num1;
    cout<<"Enter ending limit: "; cin>>num2;
    for(int j=num1; j<= num2; j++)
    {
        for(int i=2; i<j; i++)
        {
            if(j%i==0)
                {prime=0; break;}
            else
                prime=1;
        }
        if(prime==1)
            counter++;
    }
    cout<<counter;
    return 0;
}
