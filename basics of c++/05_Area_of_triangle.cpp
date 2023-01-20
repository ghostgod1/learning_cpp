#include<iostream>
using namespace std;
int main()
{
    int base,hight,area;
    cout<<"Enter base and hight of triangle\n";
    cout<<"base :";
    cin>>base;
    cout<<"hight :";
    cin>>hight;
    area = (base*hight)/2;
    cout<<"Area of triangle is "<<area;
}