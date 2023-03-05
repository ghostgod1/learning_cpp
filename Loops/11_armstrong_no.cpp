#include<iostream>
using namespace std;
int main()
{
    int n,sum,m;
    cout<<"Enter no.:";
    cin>>n;

    m = n;

    while (n>0)
    {
        int r=n%10;
        n=n/10;

        sum += r*r*r;
    }

    if(sum == m)
    {
        cout<<m<<" is a armstrong number.";
    }
    else
    {
        cout<<m<<" is not a armstrong number.";
    }
    
}