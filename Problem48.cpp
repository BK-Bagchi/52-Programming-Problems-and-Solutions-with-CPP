//An array will be given, from 1 to n. But one number between the range will be missing. Need a program to find out the missing number

#include<iostream>
using namespace std;
int main()
{
    int n, src=0, missing;
    cout<<"Enter the range of the array: "; cin>>n;
    int ary[n-1];
    cout<<"Enter numbers in array between 1 and "<<n<<" (excluding missing number):\n";
    for(int i=0; i<n-1; i++)
        cin>>ary[i];

    for(int j=1; j<=n; j++)
    {
        src=0;
        for(int i=0; i<n-1; i++)
        {
            if(j== ary[i])
                src=1;
        }
        if(src!=1)
            {missing=j; break;}
    }
    cout<<"Missing: "<<missing;
    return 0;
}
