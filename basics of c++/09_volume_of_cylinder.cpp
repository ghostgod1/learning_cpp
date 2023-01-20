#include<iostream>
using namespace std;
int main()
{
    float vol,r,h;

    cout<<"Enter Values: \n";
    cout<<"Enter radius of Cylinder: ";
    cin>>r;
    cout<<"Enter hight of Cylinder: ";
    cin>>h;

    vol = (22/7.0)*r*r*h;

    cout<<"Volume of Cylinder is "<<vol;
}