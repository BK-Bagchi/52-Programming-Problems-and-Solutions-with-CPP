//Check a array is in forward or reverse order sorted or not

#include<iostream>
using namespace std;
int main()
{
    int ary[5], term, con;
    cout<<"Enter your array: \n";
    for(int i=0; i<5; i++)
        cin>>ary[i];

    if(ary[0]<ary[1])
        term=1;
    else if(ary[0]>ary[1])
        term=2;

    cout<<"The array is sorted: ";
    if(term==1)
    {
        for(int i=0; i<4; i++)
        {
            if(ary[i]<=ary[i+1])
                con=1;
            else
            {
                con=0;break;
            }
        }

    }
    else if(term==2)
    {
        for(int i=0; i<4; i++)
        {
            if(ary[i]>=ary[i+1])
                con=1;
            else
            {
                con=0;
                break;
            }
        }
    }

    if(con==1)
        cout<<"Yes\n";
    else if(con==0)
        cout<<"No\n";
    return 0;
}
