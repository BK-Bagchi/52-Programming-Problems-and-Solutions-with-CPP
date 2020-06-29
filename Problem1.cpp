//A number will be given. We need to check out that number is even or odd

#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter your number: "; cin>>number;
    if(number%2==0)
        cout<<"The number is even";
    else
        cout<<"The number is odd";
    return 0;
}
