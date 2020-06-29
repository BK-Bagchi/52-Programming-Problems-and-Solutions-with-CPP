#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char sen[50];
    cout<<"Write your sentence: \n"; gets(sen);
    int len= strlen(sen);
    int i, j, words=0, fact=1;
    for(i=0; i<len; i++)
    {
        if(sen[i]==' ')
            words++;
    }
    words++;
    cout<<"words= "<<words;
    for(i=1; i<=words; i++)
        fact= fact*i;
    cout<<"\nProbability: 1/"<<fact;
    return 0;
}
