//Making a diamond shape with a given number

#include<iostream>
using namespace std;
int main()
{
    int number , loop, counter=1;
    char symbol;
    cout<<"Enter your number: "; cin>>number;
    cout<<"Enter symbol you want to print: "; cin>>symbol;
    for(int j=1; j<=number; j++)
    {
        for(int i=1; i<=counter; i++)
            cout<<symbol<<" ";
        cout<<endl;
        counter++;
    }

    counter= counter-2;;

    for(int j=1; j<=number-1; j++)
    {
        for(int i=counter; i>=1; i--)
            cout<<symbol<<" ";
        cout<<endl;
        counter--;
    }
    return 0;
}
