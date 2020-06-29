//Summation of series  x^0+ x^1+ x^2+ x^3+........+x^k

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x, k, sum=0;
    cout<<"Enter X( X^K ): "; cin>>x;
    cout<<"Enter K( X^K ): "; cin>>k;

    for(int i=0; i<=k; i++)
    {
        sum= sum+ pow(x,i);
    }

    cout<<"Result = "<<sum;
    return 0;
}
