//A=1, B=2, C=3,...., Z=26. Let a input ABZ/ abz/ aBz. A program that prints 1 2 26(a=1, B=2, z=26)

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int num[26]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
    char ltrA[26]={'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char ltra[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    char letter[26];
    cout<<"Enter a word(in CAPITAL  or small form): "; gets(letter);
    int len= strlen(letter);

    for(int j=0; j<len; j++)
    {
        for(int i=0; i<26; i++)
        {
            if(letter[j]== ltrA[i])
                cout<<num[i]<<" ";
            else if(letter[j]== ltra[i])
                cout<<num[i]<<" ";
        }
    }
    return 0;
}
