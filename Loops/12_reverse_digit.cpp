#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter no.:";
    cin>>n;

    while(n>0)
    {
        int r = n % 10;
        n = n / 10;

        rev = rev * 10 + r;
    }
    cout<<rev;
}