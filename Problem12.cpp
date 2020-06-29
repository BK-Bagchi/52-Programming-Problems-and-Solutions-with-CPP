//Determine the number of zeros at the last of a factorial result

#include<iostream>
using namespace std;
int main()
{
    int number, fact=1, div=10, count=0;
    cout<<"Enter your number: "; cin>>number;
    for(int i=1; i<=number; i++)
        fact= fact*i;
    for(int i=0; i<=count; i++)
    {
        if(fact%div==0)
            count++;
        div= div*10;
    }
    cout<<"Numbers of zero are: "<<count;
    return 0;
}
