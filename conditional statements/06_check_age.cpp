#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers \n";
    cin>>a>>b>>c;

    if(a>b && a<c)
    {
        cout<<a<<" : is greatest";
    }
    else if(b>a)
    {
        cout<<b<<" : is greatest";
    }
    else
    {
        cout<<c<<" : is greatest";
    }
}