//Alien Gupi. Don't understand what Gupi is doing around

#include<iostream>
using namespace std;
int main()
{
    int kg;
    cout<<"Enter the food amount(kg): "; cin>>kg;
    int days=0;
    for(int i=0; i<=days; i++)
    {
        kg= kg/2;
        if(kg<=1)
            break;
        days++;
    }
    cout<<"Days: "<<days;
    return 0;
}
