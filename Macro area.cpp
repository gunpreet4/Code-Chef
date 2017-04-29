#include<iostream>
#include<conio.h>
#define area(radius) 3.14*(radius*radius)
using namespace std;
int main()
{
    float r,A;
    cout<<"Enter the radius";
    cin>>r;
    A=area(r);
    cout<<"Area of a circle is "<<A;

}
