//Take X and N as input. Now see which numbers between them can be divided by X

#include<iostream>
using namespace std;
int main()
{
    int X, N;
    cout<<"Enter X: "; cin>>X;
    cout<<"Enter N: "; cin>>N;
    if(N<X)
        cout<<"\nInvalid!!!\n";
    else
    {
        for(int i=X; i<=N; i++)
        {
            if(i%X==0)
                cout<<i<<endl;
        }
    }
    return 0;
}
