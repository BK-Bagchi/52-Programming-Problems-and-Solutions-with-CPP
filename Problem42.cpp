#include<iostream>
using namespace std;
int main()
{
    int K;
    cout<<"Enter K: "; cin>>K;
    cout<<endl;
    for(int i=K; i>=0;  i--)
    {
        if(i==1)
            cout<<"2";
        else if(i==0)
            cout<<"1";
        else
            cout<<"2^"<<i;

        if(i!=0)
            cout<<" + ";
    }
    return 0;
}
