//A program that shows a given sentence in reverse

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char sen[50], temp;
    cout<<"Enter your word/sentence: \n"; gets(sen);
    int len= strlen(sen);
    char sen2[len];
    int i,j, k, p=0;
    for(k=0; k<len; k++)
    {
        if(sen[k]==' ')
        {
            for(i=p, j=k-1; i<k, j>=p; i++, j--)
                sen2[i]= sen[j];

            sen2[k]=' ';
            p=k+1;
        }

    }

    for(i=0; i<len; i++)
        cout<<sen2[i];
    return 0;
}
//when typing put a space at the end of last input word
