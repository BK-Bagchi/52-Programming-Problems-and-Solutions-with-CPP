//Need to write a program to count how many times a input letter is present in a sentence

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char sentence[100];
    cout<<"Enter your sentence: \n"; gets(sentence);
    char letter;
    cout<<"Enter your letter: "; cin>>letter;
    int count=0;
    for(int i=0; i<30; i++)
    {
        if(letter== sentence[i])
            count++;
    }
    cout<<"\n'"<<letter<<"'"<<"is "<<count<<" times is the sentence\n";
    return 0;
}
