//Counting vowels

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
    int vou_cnt=0;

    cout<<"Vowels: ";
    for(int j=0; j<len; j++)
    {
        for(int i=0; i<5; i++)
        {
            if(sentence[j]== vowels[i])
                {
                    vou_cnt++;
                    cout<<vowels[i]<<" ";
                }
        }
    }

    cout<<"\nVowels= "<<vou_cnt;
    return 0;
}
