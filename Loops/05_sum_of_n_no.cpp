#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter no. : ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        sum+=i;
        cout<<sum<<endl;
    }
}