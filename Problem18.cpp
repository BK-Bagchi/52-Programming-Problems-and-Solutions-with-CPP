//Printing vowels and consonants

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char sentence[50];
    cout<<"Enter your sentence: \n"; gets(sentence);
    int len= strlen(sentence);
    char vowels[]={'a', 'e', 'i', 'o', 'u'};
    char consonent[]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    int vou_cnt=0;

    cout<<"Vowels: \n";
    for(int j=0; j<len; j++)
    {
        for(int i=0; i<5; i++)
        {
            if(sentence[j]== vowels[i])
                cout<<vowels[i]<<" ";
        }
    }

    cout<<"\n\nConsonants: \n";
    for(int j=0; j<len; j++)
    {
        for(int i=0; i<21; i++)
        {
            if(sentence[j] == consonent[i])
                cout<<consonent[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}
