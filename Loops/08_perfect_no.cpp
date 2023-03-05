#include<iostream>
using namespace std;
int main()
{
    //if sum of factor are equal to the double the no then it is a perfect no.

    int n, sum=0;
    cout<<"Enter no. :";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }

    
    if(sum==2*n)
    {
        cout<<n<<" is perfect number.";
    }
    else
    {
        cout<<n<<" is not a perfect number";
    }
}