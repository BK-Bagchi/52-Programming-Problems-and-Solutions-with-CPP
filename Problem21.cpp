//A program that prints a word in reverse

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char sentence[50];
    cout<<"Enter your sentence: "; gets(sentence);
    int len= strlen(sentence);
    cout<<"\n";
    for(int i= len-1; i>=0; i--)
        cout<<sentence[i]<<" ";
    return 0;
}
