//A line ill be given with few numbers and spaces. We need to find amount of numbers in the line

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char input[100];
    int count=1;

    cout<<"Enter your numbers: "; gets(input);
    for(int i=0; i<100; i++)
    {
        if(input[i]== ' ')
            count++;
    }
    cout<<"Number of words are: "<<count-1;
    return 0;
}
