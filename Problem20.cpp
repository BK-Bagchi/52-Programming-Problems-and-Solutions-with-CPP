//Need to find the number of words by counting space and , . etc

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char sentence[50];
    int count=0;
    cout<<"Enter your sentence: \n"; gets(sentence);
    int len= strlen(sentence);
    for(int i=0; i<len; i++)
    {
        if(sentence[i]==' ' || sentence[i]==',' || sentence[i]=='.')
            count++;
    }

    cout<<"Number of word: "<<count+1;
    return 0;
}

