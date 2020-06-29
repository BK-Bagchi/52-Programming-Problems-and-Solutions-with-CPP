//Two arrays will be given. Need a program that adds two arrays in an another array and shorts it

#include<iostream>
using namespace std;
int main()
{
    int a[5], b[5], c[10] , temp;
    cout<<"Enter a[]:\n";
    for(int i=0; i<5; i++)
        cin>>a[i];

    cout<<"Enter b[]:\n";
    for(int i=0; i<5; i++)
        cin>>b[i];

    for(int i=0; i<5; i++)
        {
            c[i]= a[i];
            c[i+5]= b[i];
        }
    cout<<"Added array:\n";
    for(int j=0; j<10; j++)
    {
        for(int i=0; i<10; i++)
        {
            if(c[i+1]<c[i])
            {
                temp=  c[i];
                c[i]= c[i+1];
                c[i+1]= temp;
            }
        }
    }


    for(int i=0; i<10; i++)
        cout<<c[i]<<endl;
    return 0;
}
