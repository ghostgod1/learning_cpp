#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,m;
    cout<<"Enter no.:";
    cin>>n;

    m = n;

    while(n>0)
    {
        int r = n % 10;
        n = n / 10;

        rev = rev * 10 + r;
    }

    if(rev == m)
    {
        cout<<m<<" is a palindrome.";
    }
    else
    {
        cout<<m<<" is not a palindrome.";
    }
}