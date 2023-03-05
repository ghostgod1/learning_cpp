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

    while(rev > 0)
    {
        int r = rev % 10;
        rev = rev /10;

        switch (r)
        {
        case 1: cout<<"One ";
            break;
        
        case 2:
            cout<<"Two ";
            break;
        
        case 3:
            cout<<"Three ";
            break;
        
        case 4:
            cout<<"Four ";
            break;

        case 5:
            cout<<"Five ";
            break;
        
        case 6:
            cout<<"Six ";
            break;
        
        case 7:
            cout<<"Seven ";
            break;
        
        case 8:
            cout<<"Eight ";
            break;
        
        case 9:
            cout<<"Nine ";
            break;
        }
    }
}