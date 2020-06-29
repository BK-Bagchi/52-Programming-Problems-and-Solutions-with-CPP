//A program that finds out a position is inside a circle or not

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double xc, yc, x1, y1, r;
    cout<<"Enter central x: "; cin>>xc;
    cout<<"Enter central y: "; cin>>yc;
    cout<<"Enter the radius: "; cin>>r;
    cout<<"Enter point x: "; cin>>x1;
    cout<<"Enter point y: "; cin>>y1;
    double result= sqrt(pow((xc-x1),2)+pow((yc-y1),2));

    if(result>r)
        cout<<"\nThe point is not inside of the circle";
    else
        cout<<"\nThe point is inside of the circle";
    return 0;
}
