//Summation of series 1/1! + 2/2! + 3/3! +.....+ n/n!

#include<iostream>
#include<math.h>
using namespace std;
float fact(float n)
{
    float fact=1;
    for(int i=1; i<=n; i++)
        fact= fact*i;
    return fact;
}
int main()
{
    float n, sum=0;
    cout<<"Enter your number: "; cin>>n;
    for(int i=1; i<=n ;i++)
    {
        float fct= fact(i);
        sum= sum+(i/fct);
    }
    cout<<"\nSummation of the series: "<<sum<<endl;
    return 0;
}
