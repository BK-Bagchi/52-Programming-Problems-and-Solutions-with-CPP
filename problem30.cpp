//Check  a number is a perfect number or not

#include<iostream>
using namespace std;
int main()
{
    int number, sum=0;
    cout<<"Enter your number: "; cin>>number;
    for(int i=1; i<number; i++)
    {
        if(number%i==0)
            sum= sum+i;
    }
    if(number==sum)
        cout<<endl<<"YES!! "<<number<<" is a perfect number";
    else
        cout<<endl<<"NO!! "<<number<<" is not a perfect number";
    return 0;
}
