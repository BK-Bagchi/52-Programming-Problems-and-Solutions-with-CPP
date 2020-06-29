//Few words will be given. Need to arrange them under order

#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i, l1, l2, l3, l4, l5, enter;
    char ary[]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char a[10], b[10], c[10], d[10], e[10];

    cout<<"Enter a word: "; gets(a); l1= strlen(a);
    cout<<"Enter b word: "; gets(b); l2= strlen(b);
    cout<<"Enter c word: "; gets(c); l3= strlen(c);
    cout<<"Enter d word: "; gets(d); l4= strlen(d);
    cout<<"Enter e word: "; gets(e); l5= strlen(e);

    cout<<"\nRepresenting in shorted form: \n";
    for(int j=0; j<26; j++)
    {
        enter=0;
        if(ary[j]== a[0])
            for(i=0; i<l1; i++)
                {cout<<a[i]; enter=1;}

        else if(ary[j]== b[0])
            for(i=0; i<l2; i++)
                {cout<<b[i]; enter=1;}

        else if(ary[j]== c[0])
            for(i=0; i<l3; i++)
                {cout<<c[i]; enter=1;}

        else if(ary[j]== d[0])
            for(i=0; i<l4; i++)
                {cout<<d[i]; enter=1;}

        else if(ary[j]== e[0])
            for(i=0; i<l5; i++)
                {cout<<e[i]; enter=1;}


        if(enter==1)
            cout<<endl;
    }
    //cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e;
    return 0;
}
