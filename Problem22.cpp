//A program for prime number within a range

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, prime=1, counter=0;
    cout<<"Enter upper limit: "; cin>>num1;
    cout<<"Enter lower limit: "; cin>>num2;
    for(int j=num1; j<= num2; j++)
    {
        for(int i=2; i<j; i++)
        {
            if(j%i==0)
                {prime=0; break;}
            else
                prime=1;
        }
        if(prime==1)
            counter++;
    }
    cout<<"\nNumbers of prime number within this range :"<<counter<<endl;
    return 0;
}

