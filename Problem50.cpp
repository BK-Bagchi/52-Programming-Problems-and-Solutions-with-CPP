//A program for L-R exchange. If we have 936R282L65, we will get 9362282265 as output. R is replaced with right side 2 and L is replaced with left side 2

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char input[50];
    cout<<"Enter your input(including L R): \n"; gets(input);
    int len= strlen(input);
    int i, j;
    for(i=0; i<len; i++)
    {
        if(input[i]== 'L' || input[i]== 'l')
            input[i]= input[i-1];
       else if(input[i]== 'R' || input[i]== 'r')
            input[i]= input[i+1];
    }
    cout<<"After LEFT-RIGHT:\n";
    for(i=0; i<len; i++)
        cout<<input[i];
    return 0;
}
