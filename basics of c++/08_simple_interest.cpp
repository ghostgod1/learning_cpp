#include<iostream>
using namespace std;
int main()
{
    int SI,P,R,T;
    cout<<"Enter Values \n";
    cout<<"Enter Principal: ";
    cin>>P;
    cout<<"Enter Rate of Interest: ";
    cin>>R;
    cout<<"Enter Time in years: ";
    cin>>T;

    SI = (P*R*T)/100;

    cout<<"Simple Interest is : "<<SI;
}