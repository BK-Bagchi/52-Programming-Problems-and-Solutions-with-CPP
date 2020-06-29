//A program that checks one word is same in forward and reverse order

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char word[50];
    cout<<"Enter your word: \n"; gets(word);
    int len= strlen(word);
    //cout<<len;
    char word2[len];
    for(int i=0, j=len-1; i<len, j>=0; i++, j--)
    {
        word2[j]= word[i];
    }

    int check=0;
    for(int i=0; i<len; i++)
    {
        if(word[i]== word2[i])
            check=1;
        else
            {check=0; break;}
    }

    if(check==1)
        cout<<"\nYES!! It's palindrome\n";
    else if(check==0)
        cout<<"\nSorry!! It's not palindrome\n";
    return 0;
}
