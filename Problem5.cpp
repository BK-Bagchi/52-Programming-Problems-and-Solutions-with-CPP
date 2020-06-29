//Making a box with an input number

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your x*y number"; cin>>number;
    for(int i=1; i<= number; i++)
    {
        for(int j=1; j<=number; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
