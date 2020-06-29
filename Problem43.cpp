//A program to calculate p^q%c

#include<iostream>
using namespace std;
int main()
{
    int p, q, c, mul=1;
    cout<<"Enter p: "; cin>>p;
    cout<<"Enter q: "; cin>>q;
    cout<<"Enter c: "; cin>>c;

    for(int i=1; i<=q; i++)
      mul= mul*p;
    int result= mul%c;
    cout<<"Result = "<<result;
    return 0;
}
