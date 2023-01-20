#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,d;

    cout<<"Enter values of A, B, and C"<<endl;
    cin>>a>>b>>c;

    d = ((b*b) - (2*a*c));

    if (d == 0)
    {
        cout<<"Roots are Real and Equal"<<endl;
        cout<<"Root is "<<(-b/(2*a))<<endl;
    }
    else if(d > 0)
    {
        cout<<"Roots are Real and Unequal"<<endl;
        cout<<"Roots are ";
        cout<<(float) (-b + sqrt((b*b) - (4*a*c)))/(2*a)<<" and "<<(float) (-b - sqrt((b*b) - (4*a*c)))/(2*a);
    }
    else
    {
        cout<<"Roots are imaginary";
    }
}