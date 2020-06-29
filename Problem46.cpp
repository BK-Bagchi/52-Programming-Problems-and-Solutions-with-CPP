//Length of three arms of a triangle will be given. A program needs that can calculate the area of the triangle

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int arm1, arm2, arm3;
    cout<<"Enter length of arm 1: "; cin>>arm1;
    cout<<"Enter length of arm 2: "; cin>>arm2;
    cout<<"Enter length of arm 3: "; cin>>arm3;
    double s=(arm1+arm2+arm3)/2;
    double area= sqrt(s*(s- arm1)*(s- arm2)*(s- arm3));
    cout<<"Area= "<<area;
    return 0;
}
