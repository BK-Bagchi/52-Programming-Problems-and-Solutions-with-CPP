//Check a number is full root or not

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your number: "; cin>>number;
    float c1= sqrt(number);
    int c2= c1;
    if(c1== c2)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
