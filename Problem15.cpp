//Counting how much times a letter is in a sentence/ word

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char letter[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char sen[50];
    cout<<"Enter your word/sentence: \n"; gets(sen);
    int len= strlen(sen);
    int i, j, coun=0;
    for(j=0; j<26; j++)
    {
        coun=0;
        for(i=0; i<len; i++)
        {
            if(letter[j]== sen[i])
                coun++;
        }
        if(coun>=1)
            cout<<letter[j]<<"= "<<coun<<endl;
    }

    //cout<<letter[10];
    return 0;
}
