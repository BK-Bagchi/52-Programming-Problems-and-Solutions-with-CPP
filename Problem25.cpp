//LCM of two given number

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, num11, num22, lcm=1;
    cout<<"Enter number 1: "; cin>>num1;
    cout<<"Enter number 2: "; cin>>num2;
    int limit=num2;
    for(int i=2; i<= num2; i++)
    {
        if(num1%i==0 && num2%i==0)
            lcm= lcm*i;
    }

    cout<<"LCM= "<<lcm;
    return 0;
}
//not finished
//2|16,20
//2|8,10
// |4,5
