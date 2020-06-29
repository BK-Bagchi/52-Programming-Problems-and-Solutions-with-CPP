//A string and it's sub string will be given. Need a program to find out the location where the sub string stars at string

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char stng[50], sbstng[50];
    cout<<"Enter string: \n"; gets(stng);
    cout<<"Enter sub string: \n"; gets(sbstng);
    int len1, len2, i, j, s, prnt;
    len1= strlen(stng);
    len2= strlen(sbstng);
    for(j=0; j<len1; j++)
    {
        s=0;
        if(sbstng[0]==stng[j])
        {
            s=j;
            prnt=s;
            for(i=0; i<len2; i++)
            {
                if(sbstng[i]==stng[s])
                    s++;
                else
                    s=0;
            }
        }
    }
    cout<<endl<<prnt;
    return 0;
}
