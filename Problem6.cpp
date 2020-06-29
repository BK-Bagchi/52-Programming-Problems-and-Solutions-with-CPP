//A number of 5 length will be given. Sum the of 1st and 5th number of the 5 length number is required

#include<iostream>
using namespace std;
int main()
{
    int number, var1, var2;
    cout<<"Enter a number of 5 length: "; cin>>number;
    var1= number%10;
    var2= number/10000;
    cout<<"Sum of first and last number is: "<<var1+ var2;
    return 0;
}
