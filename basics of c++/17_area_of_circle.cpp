#include<iostream>
using namespace std;
int main()
{
    float radius, area;

    cout<<"Enter Radius of a circle\n";
    cout<<"Radius = ";
    cin>>radius;

    area = (22/7.0)*radius*radius;

    cout<<"Area of Circle = "<<area;
}