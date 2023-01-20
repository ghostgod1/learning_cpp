#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    float r1,r2;
    cout<<"Enter Values of: \n";
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    r1 =(float) (-b + sqrt((b*b) - (4*a*c)))/(2*a);
    r2 =(float) (-b - sqrt((b*b) - (4*a*c)))/(2*a);
    cout<<"Roots of equation are "<<r1<<" and "<<r2;
    return 0;
}