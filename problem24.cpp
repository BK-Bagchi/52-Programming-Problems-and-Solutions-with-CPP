//Alternate elements of an array

#include<iostream>
using namespace std;
int main()
{
    int len;
    cout<<"Enter your array length: "; cin>>len;
    int array[len];
    cout<<"Enter array elements: \n";
    for(int i=0; i<len; i++)
        cin>>array[i];
    cout<<"Alternate element of the array: \n";
    for(int i=0; i<len; i+=2)
        cout<<array[i]<<endl;
    return 0;
}
