#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter number to calculated :\n";
    cin>>n;
    sum = n * (n+1)/2;
    cout<<"Sum of first "<<n<<" natural numbers are "<<sum;
}