//Check which numbers within a range are perfect numbers

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout<<"Enter your number 1: "; cin>>num1;
    cout<<"Enter your number 2: "; cin>>num2;
    for(int number=num1; number<=num2; number++)
    {
        sum=0;
        for(int i=1; i<number; i++)
        {
            if(number%i==0)
                sum= sum+i;
        }
        if(number==sum)
            cout<<endl<<"YES!! "<<number<<" is a perfect number\n\n";
    }
    return 0;
}

